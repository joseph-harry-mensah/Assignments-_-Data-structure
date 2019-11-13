#include <iostream>
#include <string>
using namespace std;


int main()
{
    int size_of_array;
    int m, tmp;


    struct employee
{
    string empname;
    int empId;
    string benefit;
    int hours;
    double wages;
    double payRate;
};
    cout<< "Welcome to Employee Payment Center \n";
    cout<< "How many Employees are you calculating their wages?\n";
    cin>> size_of_array;

    employee struct_array[size_of_array];

     cout << struct_array[0].empname;

    for(m = 0; m < size_of_array; m++)
    {
        cout << "Enter the Employee's Name#:";
        cin>> struct_array[m].empname;

        cout << "Enter the Employee's Id#:\n";
        cin >> struct_array[m].empId;


        cout << "\nEnter Employee's pay rate:\n";
        cin >> struct_array[m].payRate;

        cout << "Enter hours worked by the Employee: \n";
        cin >> struct_array[m].hours;


        struct_array[m].wages = struct_array[m].payRate * struct_array[m].hours;
    }


    for (tmp = 0; tmp < size_of_array; tmp++)
    {
        cout << "Employee'S ID: " << struct_array[tmp].empId << ".\n";
        cout << "Gross wages: " << struct_array[tmp].wages << ".\n";
        cout << endl;
        cout << endl;
    }

    return 0;
}
