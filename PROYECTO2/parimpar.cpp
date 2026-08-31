#include <iostream>
using namespace std;
int main(){
    int numero;
    cout <<"ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "el numero es par: " << numero;
    }
    else 
    { 
        cout << "el numero es impar: " << numero;
    }
    return 0;
    }