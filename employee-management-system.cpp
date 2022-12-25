#include <iostream>
#include <string>
#include <vector>

using namespace std;

int opt;

int main();

struct employee{
    int id;
    string name;
    string email;
    string depart;
};

vector<employee>employeeList;

 void addEmployee()
 {
     employee newEmployee;

     cout << "\n\t\t EMPLOYEE-MANAGEMENT-SYSTEM\n";
     cout << "\t\t      * Add Employee *\n";
     cout << "\t ID : "; cin >> newEmployee.id;
     cout << "\t NAME : "; cin >> newEmployee.name;
     cout << "\t EMAIL : "; cin >> newEmployee.email;
     cout << "\t DEPARTMENT : "; cin >> newEmployee.depart;

     employeeList.push_back(newEmployee);

     cout << "\t BACK [0]\t\t QUIT [1] : "; cin >> opt;

     switch(opt)
     {
     case 0:
        system("cls");
        main();
        break;

     case 1:
         system("cls");
         cout << "\n\t\t Thank You for using my Program!";
         break;
     }
 }

void removeEmployee()
 {
     int id;
     cout << "\n\t\t EMPLOYEE-MANAGEMENT-SYSTEM\n";
     cout << "\t\t    * Remove Employee *\n";
     cout << "\t\t Enter the ID NO.: "; cin >> id;

     for(int i = 0; i < employeeList.size(); i++)
     {
         if(employeeList[i].id == id)
         {
             employeeList.erase(employeeList.begin() + i);
         }
         else
         {
             cout << "Employee with ID " << id << " not found!";
         }
     }

     cout << "\t BACK [0]\t\t QUIT [1] : "; cin >> opt;

     switch(opt)
     {
     case 0:
        system("cls");
        main();
        break;

     case 1:
         system("cls");
         cout << "\n\t\t Thank You for using my Program!";
         break;
     }
 }

 void listOfEmplo()
 {
     cout << "\n\t\t\t\t    EMPLOYEE-MANAGEMENT-SYSTEM\n";
     cout << "\t\t\t\t       * List of Employee *\n";
     cout << "\n\t     NO.\t\tID\t\tNAME\t\tEMAIL\t\tDEPARTMENT" << endl;

     for(int i = 0; i < employeeList.size(); i++)
     {
         cout << "\t     " << i + 1 << "    \t\t" << employeeList[i].id << "\t\t" << employeeList[i].name << "\t\t" << employeeList[i].email << "\t\t" << employeeList[i].depart << endl;
     }

     cout << "\n\t\t\t\t       BACK [0]\t\t QUIT [1] : "; cin >> opt;

     switch(opt)
     {
     case 0:
        system("cls");
        main();
        break;

     case 1:
         system("cls");
         cout << "\n\t\t Thank You for using my Program!";
         break;
     }
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

    case 2:
        system("cls");
        removeEmployee();
        break;

    case 3:
        system("cls");
        listOfEmplo();
        break;

    case 4:
        system("cls");
        cout << "\n\t\t Thank You for using my Program!";
        return 0;
        break;
    }
    return 0;
}
