#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int opc, opcc, variable,a,b,c,newvalor;
    int *puntero;

        cout << "Escoge una variable para manipular" << endl;
        cout << "1) A" << endl;
        cout << "2) B" << endl;
        cout << "1) C" << endl;
        cin >> opc;

        switch (opc)
        {
        case(1): puntero = &a; break;
        case(2): puntero = &b; break;
        case(3): puntero = &c; break;
        default: system ("clear"); cout << "Opcion Invalida"; break;
        }

        system ("clear");

        cout << "1) Asignar un valor a la variable." << endl;
        cout << "2) Mostrar la direccion de la variable en la memoria." << endl;
        cin >> opcc;

        switch (opcc)
        {
        case(1): cout << "Especifica el nuevo valor" << endl; break;
        case(2): if (puntero = &a)
        {
            cout << &a;
        } else if (puntero = &b) {
            cout << &b;
        } else {
            cout << &c;
        }
        default:break;
        }
        cin >> newvalor;

        *puntero = newvalor;

        cout << a << endl;



}