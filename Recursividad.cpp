#include <iostream>

using namespace std;

int factorial(int);

int main(){

    int numero;

     cout << factorial(5) << endl;

}

int factorial(int n){
    if (n == 0)
    {
        n = 1;
    } else {
        n = n * factorial(n- 1);
    }
    return n;
}