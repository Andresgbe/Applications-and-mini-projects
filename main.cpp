#include <iostream>
#include <cstdlib> // Para usar system()
#include <limits>
#include <ctime>
#include <cstdlib>

using namespace std;

bool validateID(const string &id)
{
    return id.length() == 2 && isdigit(id[0]) && isdigit(id[1]);
}

bool validateOption(const string &op)
{
    return op.length() == 1 && isdigit(op[0]) && op[0] >= '1' && op[0] <= '6';
}

float selectBalance()
{
    int option;
    float manualBalance;
    srand(static_cast<unsigned int>(time(0)));

    cout << "You need to select the balance" << endl;
    cout << " " << endl;
    cout << "Choose any option" << endl;
    cout << "1. Generar de forma aleatoria" << endl;
    cout << "2. Escoger manualmente" << endl;
    cin >> option;

    if (option == 2)
    {
        cout << "Enter your balance" << endl;
        cin >> manualBalance;
        return manualBalance;
    }

    if (option == 1)
    {
        int saldo = rand() % 1000000 + 1;
        cout << "Tu saldo disponible es " << saldo << endl;
        return saldo;
    }
}

void checkBalance(float balance){
    string button;
    cout << "Your actual balance" << endl;
    cout << balance << endl;

    cout << "Press any button to get back" << endl;
    cin >> button;
}

void menu(){
    system("clear");
    cout << "            ATM             " << endl;
    cout << "****************************" << endl;
    cout << "**    Choose an option    **" << endl;
    cout << "**                        **" << endl;
    cout << "**  1. Check balance      **" << endl;
    cout << "**  2. Deposit            **" << endl;
    cout << "**  3. Withdrawal         **" << endl;
    cout << "**  4. Transfers          **" << endl;
    cout << "**  5. Log out            **" << endl;
    cout << "****************************" << endl;
}

void Displaymenu()
{
    string option;

    while (!validateOption(option))
    {
        menu();
        cin >> option;

        if(!validateOption(option)){
            system("clear");
            cout << "Invalid option, please try again" << endl;
        }
    }
}

    int main()
    {
        string id;

        float actualBalance = selectBalance();
        cout << "EL BALANCE ESSS!!" << actualBalance << endl;

        cout << "                       ATM                " << endl;
        cout << "******************************************" << endl;
        cout << "**            Welcome to ATM            **" << endl;
        cout << "**                                      **" << endl;
        cout << "** Enter the last two digits of your ID **" << endl;
        cout << "**                                      **" << endl;
        cout << "******************************************" << endl;
        cout << " " << endl;

        while (!validateID(id))
        {
            cin >> id;
            if (!validateID(id))
            {
                system("clear");
                cout << "                       ATM                " << endl;
                cout << "*************************************************" << endl;
                cout << "** Invalid ID, please enter exactly two digits **" << endl;
                cout << "**                                             **" << endl;
                cout << "**                                             **" << endl;
                cout << "*************************************************" << endl;
            }
        }

        Displaymenu();

        return 0;
    }
