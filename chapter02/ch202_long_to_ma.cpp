//
// Created by Jilil Rahmat on 2018/4/20.
//

#include <iostream>

using namespace std;

void ch202_long_to_ma()
{
    int distance_long, distance_ma;
    cout << "Please input a long: " << endl;
    cin >> distance_long;
    distance_ma = 220 * distance_long;
    cout <<distance_long << " long is " << distance_ma << " 码";
}