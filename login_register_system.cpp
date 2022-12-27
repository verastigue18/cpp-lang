#include <iostream>
#include <map>
#include <string>

using namespace std;

int opt;
string username, password;

struct account {
    string username;
    string password;
};

map<string, account> accList;

void registerPage()
{
    cout << "\n\n\t\t\t LOGIN & REGISTER SYSTEM";
    cout << "\n\n\t\t\t    * REGISTER PAGE *";
    cout << "\n\n\t\t Enter a username: "; cin >> username;


    if(accList.count(username) > 0 )
    {
        cout << "\n\t\t Sorry, that username is already taken. Please choose a different one." << endl;
    }
    else
    {
        cout << "\t\t Enter a Password : "; cin >> password;

        account newAcc;
        newAcc.username = username;
        newAcc.password = password;

        accList[username] = newAcc;

        cout << "\n\t\t Registration Successful!" << endl;
    }
}

void loginPage()
{
    cout << "\n\n\t\t\t LOGIN & REGISTER SYSTEM";
    cout << "\n\n\t\t\t     * LOGIN PAGE *";
    cout << "\n\n\t\t Enter your Username : "; cin >> username;

    if(accList.count(username) > 0 )
    {
        cout << "\t\t Enter your Password : "; cin >> password;

        if(accList[username].password == password)
        {
            cout << "\n\t\t Login Successful!" << endl;
        }
        else
        {
            cout << "\n\t\t Invalid Username or Password. Please try Again." << endl;
        }
    }
    else
    {
        cout << "\n\t\t Invalid Username or Password. Please try Again." << endl;
    }
}

int main()
{
    while(1)
    {
        cout << "\n\n\t\t\t LOGIN & REGISTER SYSTEM";
        cout << "\n\n\t\t 1 - Register";
        cout << "\n\t\t 2 - LogIn";
        cout << "\n\t\t 3 - Quit";
        cout << "\n\n\t\t Pick a Number : "; cin >> opt;

        switch(opt)
        {
        case 1:
            system("cls");
            registerPage();
            break;

        case 2:
            system("cls");
            loginPage();
            break;

        case 3:
            system("cls");
            cout << "\n\n\t\t\t Thank You for Using My Program!";
            return 0;
            break;

        default:
            system("cls");
            cout << "\n\n\t\t\t Invalid Number. Please Try Again!";
            break;
        }
    }

    return 0;
}
