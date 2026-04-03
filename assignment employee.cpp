/*
Name: WONG JIAN CHENG
Student ID: SCSJ 2200858
Program description: This my first program
Filename: assignment employee.cpp
Date: 18/10/2022
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
  string name;
  const double basepay = 1000;
  double monthlysales, grosspay, deductions, netpay;
  
  do
  {
        cout << "Enter employee name:  ";
        cin >> name;
        if (name == "exit")
        {
            cout <<endl;
            cout <<"Thank you! This program has ended."<<endl;
            exit(0);
        }
   
        cout <<endl;
        cout << "Enter monthly sales:  ";
        cin >> monthlysales;
    
   
        if (monthlysales >= 50000)
        {
            grosspay = (0.16 * monthlysales + basepay);
        }
        else if (monthlysales >= 40000 && monthlysales < 50000)
        {
            grosspay = (0.12 * monthlysales + basepay);
        }
        else if (monthlysales >= 30000 && monthlysales < 40000)
        {
            grosspay = (0.10 * monthlysales + basepay);
        }
        else if (monthlysales >= 20000 && monthlysales < 30000)
        {
            grosspay = (0.06 * monthlysales + basepay);
        }
        else if (monthlysales < 10000)
        {
            grosspay = (0.03 * monthlysales + basepay);
        }

    deductions = 0.18*grosspay;
    netpay = grosspay-deductions;


    cout << "--------------------------" <<endl;
    cout << "Employee:   " << name <<endl;
    cout << "Grosspay:   " << "$" << grosspay <<endl;
    cout << "Deductions: " << "$" << deductions <<endl;
    cout << "Netpay:     " << "$" << netpay <<endl;
    cout << "--------------------------" <<endl;
    cout <<endl;
    cout <<endl;
    
   } 
  
    while(name != "exit");
 

  return 0;
}