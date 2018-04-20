//
// Created by Jilil Rahmat on 2018/4/20.
//

#include <iostream>

using namespace std;

void ch206_light_year_to_astronomical_units()
{
    double light_year, astronomical_units;
    cout << "Enter the number of light years: ";
    cin >> light_year;
    astronomical_units = 63240 * light_year;
    cout << light_year << " light years = " << astronomical_units << " astronomical units.";
}