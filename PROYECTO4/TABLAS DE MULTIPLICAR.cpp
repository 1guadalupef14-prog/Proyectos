#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int n, i=1, limite;
     cout << "ingrese que tabla quiere mostrar: " ;
     cin >> n;
     cout << "introduzca un limite: ",
     cin >> limite;

     while ( i <= limite)

     {
        cout  << n << "x" << setw(2) << i << "=" << n * i << endl; 
        i++;
     }

     return 0;
}




