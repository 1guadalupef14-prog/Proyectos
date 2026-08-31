#include <iostream>
using namespace std;
int main () {

    int n1, n2;

    cout << "ingrese dos numeros para la suma; "<< endl;
    cin >> n1 >> n2;

for (int i = 0; i < 2; i++)

 {
    if (n1 < 0 || n2 < 0)

 {
    cout << "el numero es negativo" << endl;
    
        break;
 }  
    else
    {
        cout << "la suma es: " << n1 + n2 << endl;
    }

}
   return 0;

}