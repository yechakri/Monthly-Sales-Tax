// This program calculates and reports the monthly sales 
// and the amount of sales tax

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{  
    // Constants
    const float STATE_TAX_PERCENTAGE = 0.04,  // State sales tax percentage 4%
                COUNTY_TAX_PERCENTAGE = 0.02; // County sales tax percentage 2%
                
    // Variables
    string month, year;       // Month/Year
    double totalCollected,    // Total income collected at the cash register
           sales,             // The amount of product sales
           stateTax,          // State sales tax
           countyTax,         // County sales tax
           totalTax;          // Total sales tax
                      
    // Set the desired outpout formatting for numbers
    cout << setprecision(2) << fixed << showpoint;

    // Get information
    cout << "Please enter the month and the year:\n"
         << "Month: ";
    getline(cin, month);
    cout << "Year: ";
    getline(cin, year);
    cout << "Please enter the tottal amount \ncollected at the cash register:";
    cin >> totalCollected;

   // Calculate the sales for the month and the amount of sales tax collected
   sales = totalCollected / 1.06;
   stateTax = sales * STATE_TAX_PERCENTAGE;
   countyTax = sales * COUNTY_TAX_PERCENTAGE;
   totalTax = stateTax + countyTax;

    // Display the calculated data   
    cout << "\nMonth/Year: " << month << "/" << year << endl;
    cout << "------------------------------------\n";
    cout << "Total collected:     $" << setw(10) << totalCollected << endl
         << "Sales:               $" << setw(10) << sales << endl
         << "County Sales Tax:    $" << setw(10) << countyTax << endl
         << "State Sales Tax:     $" << setw(10) << stateTax << endl
         << "Total Sales Tax:     $" << setw(10) << totalTax << endl;

    return 0;
}
