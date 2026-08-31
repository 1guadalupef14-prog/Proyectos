#include <iostream>
using namespace std;
int main () {
    //calculadora 
    char operador;
    int n1, n2;

    cout << "ingrese un operador \n + - * /" << endl;
    cin >> operador;

    cout <<"ingrese dos numeros:" << endl;
    cin >> n1 >> n2;

    switch (operador) 
    {
        case '+':
        cout << n1 << "+" << n2 << "=" << n1 + n2 ;
        break;

        case '-':
        cout << n1 << "-" << n2 << "=" << n1 - n2 ;
        break;

        case '*':
        cout << n1 << "*" << n2 << "=" << n1 * n2 ;
        break;

        case '/':
        cout << n1 << "/" << n2 << "=" << n1 / n2 ;
        break;

        default:
        cout << "error, operador no valido...." ;
        break;

        return 0;  


    }
}