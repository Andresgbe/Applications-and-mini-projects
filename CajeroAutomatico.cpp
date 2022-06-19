#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include "Cajero.h"

using namespace std;



int menu(){
    int opc = 0;
    



    system("clear");

    while (opc = 3)
    {
    opc = 0;
    cout << "Cajero Automatico" << endl;
    cout << "Escoge una opcion" << endl << endl;
    cout << "1.) Depositar Dinero" << endl;
    cout << "2.) Retirar Dinero" << endl;
    cout << "3.) Salir" << endl << endl;
    cout << "Saldo Disponible = " << saldox << endl;
    
    cin >> opc;
    


    switch (opc)
    {
    case 1: system("clear"); depositar(); break;
    case 2: system("clear"); retirar(); break;
    default: system("clear"); cout << "Opcion invalida"; break;
    }

}
    return 0;
}



int main(){
    saldo();
    menu();
}
            