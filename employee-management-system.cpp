#include <iostream>
#include <string>

using namespace std;

int opt, i = 0;

struct employee{
    int id;
    string name;
    string email;
    string depart;
};

 void addEmployee()
 {
     employee emplo;

     cout << "\n\t\t EMPLOYEE-MANAGEMENT-SYSTEM\n";
     cout << "\t\t      * Add Employee *\n";
     cout << "\t ID : "; cin >> emplo.id;
     cout << "\t NAME : "; cin >> emplo.name;
     cout << "\t EMAIL : "; cin >> emplo.email;
     cout << "\t DEPARTMENT : "; cin >> emplo.depart;
 }

int main()
{
    cout << "\n\t\t EMPLOYEE-MANAGEMENT-SYSTEM\n";
    cout << "\n\t [1] - Add Employee";
    cout << "\n\t [2] - Remove Employee";
    cout << "\n\t [3] - List of Employee";
    cout << "\n\t [4] - Quit";
    cout << "\n\n\t Enter your Choice : ";
    cin >> opt;

    switch(opt)
    {
    case 1:
        system("cls");
        addEmployee();
        break;
    }

    return 0;
}
