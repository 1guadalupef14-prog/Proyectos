#include <iostream>
using namespace std;
int main (){
    int horas, minutos;
    double costo = 3.50, pagototal;
    
    cout << "Ingrese las horas: ";
    cin >> horas;
    cout << "Ingrese los minutos: ";
    cin >> minutos;
    
    // Convertir minutos a fracción de hora y calcular el pago
    double tiempoTotal = horas + (minutos / 60.0);
    pagototal = tiempoTotal * costo;
    
    cout << "El pago es por: $" << pagototal << endl;
    
    return 0;
}