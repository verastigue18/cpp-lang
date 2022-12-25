#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Employee {
string name;
int id;
string position;
double salary;
};

vector<Employee> employeeList;

void addEmployee() {
Employee newEmployee;
cout << "Enter the employee's name: ";
cin >> newEmployee.name;
cout << "Enter the employee's ID number: ";
cin >> newEmployee.id;
cout << "Enter the employee's position: ";
cin >> newEmployee.position;
cout << "Enter the employee's salary: ";
cin >> newEmployee.salary;
employeeList.push_back(newEmployee);
cout << "Employee added successfully!" << endl;
}

void viewAllEmployees() {
cout << "ID\tName\tPosition\tSalary" << endl;
for (int i = 0; i < employeeList.size(); i++) {
cout << employeeList[i].id << "\t" << employeeList[i].name << "\t" << employeeList[i].position << "\t" << employeeList[i].salary << endl;
}
}

int main() {
int choice;
while (true) {
cout << "1. Add a new employee" << endl;
cout << "2. View all employees" << endl;
cout << "3. Exit" << endl;
cout << "Enter your choice: ";
cin >> choice;
if (choice == 1) {
addEmployee();
} else if (choice == 2) {
viewAllEmployees();
} else if (choice == 3) {
break;
} else {
cout << "Invalid choice. Try again." << endl;
}
}
return 0;
}



#include <iostream>
#include <string>
#include <vector>

using namespace std;

int opt, i = 0;

struct employee{
    int id;
    string name;
    string email;
    string depart;
};

vector <employee> employeeList;

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

     for(int i = 1; i <= employeeList.size(); i++)
     {
         cout << "\t" << i << "\t\t" << employeeList[i].id << "\t\t" << employeeList[i].name << "\t\t" << employeeList[i].email << "\t\t" << employeeList[i].depart;
     }
 }

 void removeEmployee()
 {
     cout << "\n\t\t EMPLOYEE-MANAGEMENT-SYSTEM\n";
     cout << "\t\t    * Remove Employee *\n";
 }

 void listOfEmplo()
 {
     cout << "\n\t\t\t\t    EMPLOYEE-MANAGEMENT-SYSTEM\n";
     cout << "\t\t\t\t       * List of Employee *\n";
     cout << "\n\t     NO.\t\tID\t\tNAME\t\tEMAIL\t\tDEPARTMENT" << endl;

     for(int i = 1; i <= employeeList.size(); i++)
     {
         cout << "\t" << i << "\t\t" << employeeList[i].id << "\t\t" << employeeList[i].name << "\t\t" << employeeList[i].email << "\t\t" << employeeList[i].depart;
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
    }

    return 0;
}
