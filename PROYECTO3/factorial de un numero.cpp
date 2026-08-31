#include <iostream>
using namespace std;
int main(){
    int i, n1, factorial=1;
    cout << "ingresa un numero: ";
    cin >> n1; 
 
   for (int i=1; i<=n1; i++) {

    factorial= factorial * i;
    
   }
    cout << "el factorial es:  " <<  factorial;

   if (factorial % 1 == 0) {
     cout << "\n" << "el resultado es numero primo";
   }

  else 
  {
     cout << "\n" << "el resultado no es numero primo";
  }
   return 0;
}