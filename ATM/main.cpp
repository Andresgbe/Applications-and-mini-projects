#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include <cstdlib>
#include "atm_functions.h"
#include <string>

using namespace std;

bool validateID(const string &id)
{
    return id.length() == 2 && isdigit(id[0]) && isdigit(id[1]);
}

bool validateOption(const string &op)
{
    return op.length() == 1 && isdigit(op[0]) && op[0] >= '1' && op[0] <= '6';
}

void invalidOption(){
    string button;
    system("clear");
    cout << "************************************" << endl;
    cout << "**         Invalid option         **" << endl;
    cout << "**                                **" << endl;
    cout << "**  Press any button to continue  **" << endl;
    cout << "************************************" << endl;
    cout << " " << endl;
    cin >> button;
    system("clear");
}

float selectBalance()
{
    string option;
    float manualBalance;
    srand(static_cast<unsigned int>(time(0)));
    cout << " " << endl;
    cout << "************************************" << endl;
    cout << "**   Select the account balance   **" << endl;
    cout << "**                                **" << endl;
    cout << "** 1.  Randomly generate          **" << endl;
    cout << "** 2.  Manually select            **" << endl;
    cout << "************************************" << endl;
    cout << " " << endl;
    cin >> option;

    if (option == "1")
    {
        int balance = rand() % 1000000 + 1;
        system("clear");
        return balance;
    } else if (option == "2")
    {
       system("clear");
       cout << "****************************" << endl;
       cout << "**   Enter your balance   **" << endl;
       cout << "**                        **" << endl;
       cout << "****************************" << endl;
       cout << " " << endl;
       cin >> manualBalance;
       system("clear");
       return manualBalance;
    }

    invalidOption();
    return selectBalance();
}

int identification(){
    string id;
    
    system("clear");
    cout << "                    ATM                   " << endl;
    cout << "******************************************" << endl;
    cout << "**           Welcome to ATM             **" << endl;
    cout << "**                                      **" << endl;
    cout << "** Enter the last two digits of your ID **" << endl;
    cout << "**                                      **" << endl;
    cout << "******************************************" << endl;
    cout << " " << endl;
    cin >> id;

    if(validateID(id)){
        int num = stoi(id);
        return num;
    }

    invalidOption();
    return identification();
}

int menu(){
    string option;

    system("clear");
    cout << "                 ATM                " << endl;
    cout << "*************************************" << endl;
    cout << "**        Choose an option        **" << endl;
    cout << "**                                **" << endl;
    cout << "**  1.  Check balance             **" << endl;
    cout << "**  2.  Deposit                   **" << endl;
    cout << "**  3.  Withdrawal                **" << endl;
    cout << "**  4.  Transfers                 **" << endl;
    cout << "**  5.  Log out                   **" << endl;
    cout << "************************************" << endl;
    cout << " " << endl;
    cin >> option;

    if(validateOption(option)){
        int num = stoi(option);
        return num;
    }

    invalidOption();
    return menu();
}



    int main()
    {

        float actualBalance = selectBalance();
        cout << "Available Balance: " << actualBalance << endl;
        cout << " " << endl;

        identification();
        int op = menu();
            switch (op)
            {
            case 1:
                checkBalance(actualBalance);
                menu();
                break;
            case 2:
                deposit();
                menu();
                break;
            case 3:
                withdrawal();
                menu();
                break;

            default:
                break;
            }
        return 0;
    }
