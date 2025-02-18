#ifndef ATM_FUNCTIONS_H 
#define ATM_FUNCTIONS_H
#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

/* Corregir WitdrawalProcess, la idea es que tenga el mismo diseno de los asteriscos "*", y que el boton cargndo aparezca dentro del diseno. 
Y poner un cin >> para leer una variable y se pueda ver el proceso.*/
void withdrawalProcess()
{
    for (int i = 0; i < 3; ++i)
    {
        cout << ".";
        // Espera 1 segundo
        this_thread::sleep_for(chrono::seconds(1));
    }

    // Después de 3 segundos, muestra el mensaje de "Retiro Exitoso"
    cout << "\nRetiro Exitoso!" << endl;
}

void checkBalance(float balance)
{
    string button;

    cout << "**********************************" << endl;
    cout << "**     Your actual balance      **" << endl;
    cout << "**            " << balance << "             **" << endl;
    cout << "**                              **" << endl;
    cout << "** Press any button to get back **" << endl;
    cout << "**********************************" << endl;
    cin >> button;
}

void deposit()
{
    int option;
    system("clear");
    cout << "**************************************" << endl;
    cout << "**  Seleccione el tipo de depósito  **" << endl;
    cout << "**                                  **" << endl;
    cout << "** 1.  Efectivo                     **" << endl;
    cout << "** 2.  Cheque                       **" << endl;
    cout << "**************************************" << endl;
    cin >> option;

    if(option == 1){

    } else if(option == 2){
        
    }
}

void withdrawal(){
    int option;

    system("clear");
    cout << "*************************************" << endl;
    cout << "**  Selecciona el monto a retirar  **" << endl;    
    cout << "**                                 **" << endl;
    cout << "** 1.   10$                        **" << endl;
    cout << "** 2.   20$                        **" << endl;
    cout << "** 3.   50$                        **" << endl;
    cout << "** 4.  100$                        **" << endl;
    cout << "** 5.  500$                        **" << endl;
    cout << "** 6. 1000$                        **" << endl;
    cout << "** 7. Otro monto                   **" << endl;
    cout << "*************************************" << endl;
    cout << " " << endl;
    cin >> option;
    cout << "Cargando por favor espere..." << endl;
    withdrawalProcess();
}

#endif