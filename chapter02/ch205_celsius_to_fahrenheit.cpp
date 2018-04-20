//
// Created by Jilil Rahmat on 2018/4/20.
//

#include <iostream>

using namespace std;

void ch205_celsius_to_fahrenheit()
{
    double celsius, fahrenheit;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    fahrenheit = 1.8 * celsius + 32.0;
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.";
}