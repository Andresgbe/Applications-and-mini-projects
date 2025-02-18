#include <iostream>
#include "atm_functions.h"

using namespace std;

void checkBalance(float balance)
{
    string button;

    cout << "**********************************" << endl;
    cout << "**   Your actual balance   **" << endl;
    cout << "**      " << balance << "       **" << endl;
    cout << "**                              **" << endl;
    cout << "** Press any button to get back **" << endl;
    cout << "**********************************" << endl;
    cin >> button;
}

void deposit(){
    cout << "hola" << endl;
}