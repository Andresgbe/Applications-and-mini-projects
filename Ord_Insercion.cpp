#include <iostream>

using namespace std;

int main(){
    int i,aux,pos;
    int vector[] = {2,4,1,5,3};

    for (i = 0; i < 5; i++)
    {
        pos = i;
        aux = vector[i];

        while ((pos > 0) && (vector[pos - 1] > aux ))
        {
            vector[pos] = vector[pos - 1];
            pos--;
        }
        vector[pos] = aux;
    }
    for (i = 0; i < 5; i++)
    {
        cout << vector[i] << endl;
    }

}