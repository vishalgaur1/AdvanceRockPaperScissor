#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
string count(int n)
{
    string name;
    switch (n)
    {
    case 1:
        name = "Rock";
        break;
    case 2:
        name = "Paper";
        break;
    case 3:
        name = "Scissors";
        break;
    case 4:
        name = "Lizard";
        break;
    case 5:
        name = "Spock";
        break;
    }
    return name;
}
int main()
{
    int user, comp;
jum:
    cout << "1. Rock\n"
         << "2. Paper\n"
         << "3. Scissors\n"
         << "4. Lizard\n"
         << "5. Spock\n\n";
    cout<<"Enter your response: ";
    cin >> user;
    cout << "\n\n\n"; 
    if (user > 5 || user <= 0)
    {
        cout << "\nThe nunber you entered is invalid. Please try again!\n\n";
        goto jum;
    }

    srand(time(0));
    comp = rand() % 5 + 1;
    if ((user == 1 && (comp == 3 or comp == 4)) or (user == 2 && (comp == 1 or comp == 5)) or (user == 3 && (comp == 2 or comp == 4)) or (user == 4 && (comp == 2 or comp == 5)) or (user == 5 && (comp == 1 or comp == 3)))
    {
        cout << "You chose : ";
        cout << count(user);
        cout << "     |       Computer chose : ";
        cout << count(comp)
             << "\n\nYou Won\n\n\n\n";
        goto jum;
    }
    else if(user==comp){
         cout << "You choose : ";
        cout << count(user);
        cout << "     |      Computer chose : ";
        cout << count(comp)<<"\n\nDraw\n\n\n\n";
        goto jum;
    }
    else
    {
        cout << "You chose : ";
        cout << count(user);
        cout << "     |       Computer chose : ";
        cout << count(comp)
             << "\n\nYou lost, Try Again\n\n\n\n";
        goto jum;
    } 
    return 0;
}