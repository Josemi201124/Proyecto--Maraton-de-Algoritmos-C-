/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//100. Calcular el tiempo si se conoce velocidad y distancia.
#include <iostream>
using namespace std;
int main() {
    double distancia, velocidad;
    cout << "Ingrese distancia (km): "; cin >> distancia;
    cout << "Ingrese velocidad (km/h): "; cin >> velocidad;
    double tiempo = distancia / velocidad;
    cout << "Tiempo estimado: " << tiempo << " horas" << endl;
    return 0;
}









