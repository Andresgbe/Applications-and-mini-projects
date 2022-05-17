#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include "Estructuras.h"


        

int menu() 
{
    int opc = 4; 
    while (opc > 0 && opc < 5) {system("clear");
        cout << "MENUU" << endl;
        cout << "Escoge una opcion" << endl;
        cout << "1) Calculo" << endl;
        cout << "2) Imprimir Factura" << endl;
        cout << "3) Salir" <<endl;
        cin >> opc;
        switch (opc) {
            case(1): system ("clear"); informacion(); break;
            case(2): system ("clear"); factura(); break;
            case(3): system ("clear"); opc = 0; break;
            default: system ("clear"); cout << "Opcion Invalida"; break;
        }
    }
    return 0;
}


int main() 
{
    menu();
    system("pause");
}
