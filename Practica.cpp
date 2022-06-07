#include <iostream>
// #include <conio.h>

using namespace std;


int main(){
    int vector[] = {5, 6, 1500, 102, 25, 3};
    int aux = 0;
    int auxt = 0;
    
    for (int i = 0; i < 6; i++)
    {
    for (int j = 0; j < 6; j++)
    {
    if (vector[i] > vector[i + 1])
    {
         aux = vector[i];
    } else {
         auxt = vector[i + 1];
    }

    if (aux > auxt)
    {
    auxt = aux;
    } else {
    aux = auxt;
    }

    }
    
    }

    cout << "El numero mayor es " << aux << " y " << endl;

    

    
     return 0;
     
}