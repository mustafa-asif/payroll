// payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "ENTER YOUR WORKED HOUR : " << endl;
    int hr;
    cin >> hr;
    cout << "ENTER YOUR PAYRATE :" << endl;
    float pr;
    cin >> pr;
    float wage;
    wage = hr;
    wage *= pr;
    cout << "YOUR WAGE IS : " << wage << endl;
    return 0;
}