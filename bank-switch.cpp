#include <iostream>
using namespace std;

int main()
{

    int i = 0, choice, balance = 0, deposit = 0, withdrawl = 0;

    cout << "Press 1 for check balance  ";
    cout << "\nPress 2 for deposit balance  ";
    cout << "\nPress 3 for withdrawl balance  ";
    cout << "\nPress 4 for exit  ";

    cout << "\nPlease enter your choice :-  ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Total Balance :- " << balance;
        break;
    case 2:
        cout << "Please enter the deposit aount :- ";
        cin >> deposit;
        balance += deposit;
        break;
    case 3:
        cout << "Please enter the amount to be withdrawl :- ";
        cin >> withdrawl;
        if (balance >= withdrawl)
            balance -= withdrawl;
        else
            cout << "\n Withdrawl amount is greater then balance in your account !\n";
        break;
    case 4:
        cout << "Thank You for using banking service !!\n";
        exit;
        break;
    default:
        cout << "Please enter the right choice only !!";
    }
    cout << "Total balance in account :- " << balance;

    return 0;
}