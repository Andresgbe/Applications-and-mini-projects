#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
using namespace std;

typedef struct {
            int precio;
            int unidades;
            int rif;
            double iva;
            double descuento;
            string producto;
            string nombre;
            string direccion;
    }datos;
    
    datos Tdatos;

    int informacion()
        {
        
        cout << "Introduce tu nombre" << endl;
        cin >> Tdatos.nombre;
        fflush(stdin);
        cout << "Introduce la direccion" << endl;
        cin >> Tdatos.direccion;
        fflush(stdin);
        cout << "Introduzca la cantidad de unidades" << endl;
        cin >> Tdatos.unidades;
        fflush(stdin);
        cout << "Especifica el precio" << endl;
        cin >> Tdatos.precio;
        fflush(stdin);
        cout << "Cual es tu RIF?" << endl;
        cin >> Tdatos.rif;
        fflush(stdin);
        cout << "Nombre del producto " << endl;
        cin >> Tdatos.producto;
        fflush(stdin);

        cout << "Va a querer descuento?" << endl;
        cout << "1) SI" << endl;
        cout << "2) NO" << endl;
        cin >> Tdatos.descuento;
        fflush(stdin);

        return 0;
        }



    int factura() 
{   
    double descuentos;
    double total;
    double iva;
    total = (Tdatos.unidades*Tdatos.precio);
    int boton;
    
    cout << "Precio del producto " << Tdatos.producto;
    cout << "Unidades " << Tdatos.unidades;
    cout << "Descuento (s/n) " << Tdatos.nombre << endl;
    cout << "Nombre del cliente: " << Tdatos.nombre << endl;
    cout << "RIF del cliente " << Tdatos.rif << endl;
    cout << "Direccion del cliente: " << Tdatos.direccion << endl;
    cout << "Nombre del producto " << Tdatos.producto << endl;
    
    cout << "Factura:" << endl;
    cout << Tdatos.nombre << endl;
    cout << Tdatos.direccion << endl;
    cout << Tdatos.rif << endl;
    cout << "Producto: " << Tdatos.producto << endl;
    cout << "Precio unitario \t\t\t" << Tdatos.precio << endl;
    cout << "Unidades \t\t\t" << Tdatos.unidades << endl;
    cout << "Total \t\t\t" << total << endl;
    if (Tdatos.descuento = 1)
    {
    descuentos = (total*0.15);
    total = total - descuentos;
    cout << "Descuento \t\t\t" << descuentos << endl; }
    else {
        cout << "Descuento \t\t\t" << "NO." << endl;
    
    }
    iva = total*0.21;
    cout << "I.V.A (21%) \t\t\t" << (iva) << endl;
    cout << "Precio final \t\t\t" << (total + iva) << endl;
    cin >> boton;

    return 0;

}
 
