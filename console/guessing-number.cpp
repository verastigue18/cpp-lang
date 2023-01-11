#include <iostream>
#include <cstdlib>
using namespace std;

int live = 3, guess, ans;

int main()
{
    system("clear");

    srand(time(0));
    ans = 1 + (rand() % 10);

    do
    {
        cout << "\t\t\t Guessing Number [1-10] \n\n";
        cout << "\t\t You only Have " << live << " Try!\n\n";

        cout << "\t\t Enter Your Guess : ";
        cin >> guess;
        live--;
        system("clear");
    }
    while(guess != ans && live != 0);

    if(guess == ans && live != -1)
    {
        system("clear");
        cout << "\t\t\t      Congratulation!\n";
    }
    else
    {
        system("clear");
        cout << "\t\t\t\t Game Over!\n";
    }

    cout << "\t\t\t The Correct Guess is " << ans << endl;
}
