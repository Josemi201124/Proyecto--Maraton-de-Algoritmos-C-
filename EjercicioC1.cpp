/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//1. Calcular el área de un círculo.
#include <iostream>
#include <cmath>  // Para usar la constante M_PI y la función pow()
using namespace std;
int main() {
    double radio, area;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    area = M_PI * pow(radio, 2); // Fórmula del área: π * r²
    cout << "El área del círculo es: " << area << endl;
    return 0;
}
