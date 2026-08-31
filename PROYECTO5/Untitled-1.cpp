#include <iostream>
using namespace std;
int main () {
int n, i=0;

cout << "ingrese el numero: ";
cin >> n;

do 
{
    n = n / 10;
    i++   

} while (n > 0 );

 cout << "cantidad de digitos del numero es: " << i << endl;
 
return 0;

}
