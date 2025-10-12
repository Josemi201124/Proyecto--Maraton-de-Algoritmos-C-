/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Gloder Rodriguez
//28. Calcular el volumen de un cilindro.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double radio, altura;
    cout << "Radio: "; cin >> radio;
    cout << "Altura: "; cin >> altura;
    double volumen = M_PI * pow(radio, 2) * altura;
    cout << "Volumen del cilindro: " << volumen << endl;
    return 0;
}


