//
//  main.cpp
//  Book Exercise 2.6
//
//  Created by ax on 8/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  DIGIT SUMMER
//
/*
    Sum the digits of any number
    between 1 and 1000
    e.g. the sum of the digits of 999 is 27
 */


#include <iostream>
using namespace std;

int main() {
    
    // Program Title
    cout << "Digit Summer\n";
    
    // data storage
    int input_number = 0;
    int first_digit = 0;
    int second_digit = 0;
    int third_digit = 0;
    int fourth_digit = 0;
    int sum_digits = 0;
    
    // I
    // read input of subtotal and gratuity rate
    cout << "Enter a number between 0 and 1000: ";
    cin >> input_number;
    
    // P
    // divide off digits by modulus
    first_digit = (input_number % 10);
    second_digit = ((input_number - first_digit) / 10) % 10;
    third_digit = ((((input_number - first_digit) / 10) - second_digit) / 10) % 10;
    fourth_digit = ((((((input_number - first_digit) / 10) - second_digit) / 10) - third_digit) / 10) % 10;
    sum_digits = first_digit + second_digit + third_digit + fourth_digit;
    
    // O
    // output digit sum
    // cout << "First digit: " << first_digit << endl;
    // cout << "2nd digit: " << second_digit << endl;
    // cout << "3rd digit: " << third_digit << endl;
    // cout << "4th digit: " << fourth_digit << endl;
    cout << "The sum of the digits is: " << sum_digits << endl;
    
    
    return 0;
}
