#include <iostream>

using namespace std;

int saldox;

int saldo(){ 
    cout << "Indique el saldo incial" << endl << endl;
    cin >> saldox;
    system("clear");
}


int depositar(){
    int money;

    cout << "Cuanto dinero desea depositar?" << endl;
    cin >> money;
    saldox = saldox + money;
    system("clear");
}

int retirar(){
    int money;

    cout << "Cuanto dinero desea retirar?" << endl;
    cin >> money;
    saldox = saldox - money;
    system("clear");
}
