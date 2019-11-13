// A program that will be used to calculate employee salary
//or pay slip o f 10 employees created by PS/CSC/17/0045 - Joseph Harry Mensah
#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <string>


using namespace std;

int main()
{
     //constant
    const int empldnum = 10;

     //arrays initialized with manual entries
    int empld[empldnum] = {1234567, 2345678, 3456789, 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 750489};
    int hours[empldnum];
    double payrate[empldnum];
    double wages[empldnum];


    //arrays initialized with manual entries
    cout << "\nWelcome to One district one factory Project Employee Pay Center\n\n" ;

     //inputs for user entries
    cout << "Please enter the hours worked by " <<empldnum  << " employees\n"
         << "and their hourly pay rates.\n";

             //loops for each employee
    for (int m = 0; m < empldnum; m++)
    {
        do
        {
            cout << "Please enter the hours worked by Employee # " << (m + 1) << " (ID = " << empld[m] << ") : ";
            if (cin >> hours[m])
            {
                if (hours[m] > 0) //data validation of input
                    break;

                cout << "Enter a positive number" << endl;
            }
            else
            {
                cout << "Enter in a valid number" << endl;
            }
        }
        while (true);

        do
        {
            cout << "Please enter the pay rate for Employee # " << (m + 1) << " (ID = " << empld[m] << ") : ";
            if (cin >> payrate[m])
            {
                if (payrate[m] >= 15.0)
                    break;

                cout << "The pay rate must be greater than or equal to 15.00" << endl;
            }
            else
            {

                cout << "Enter in a valid monetary amount" << endl;
            }
        }
        while (true);

        wages[m] = hours[m] * payrate[m];
    }

    //outputs for results

    cout << "This is the gross pay for each employee:\n";

    for (int j = 0; j < empldnum; j++)
    {
        cout << "Employee #" << (j + 1) << " (ID_num = " << empld[j] << ") : ";
        cout << " has earned GHc" << wages[j] << endl << endl;
    }

    return 0;
}
