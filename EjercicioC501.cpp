//Gloder Rodríguez
// EjercicioC501 - Tema: Uso básico de punteros para acceder y modificar valores

#include <iostream>
using namespace std;

int main() {
    // Declaramos dos variables enteras
    int a = 10, b = 20;

    // Declaramos punteros que apuntan a las direcciones de a y b
    int *ptrA = &a;
    int *ptrB = &b;

    cout << "Valor inicial de a: " << a << endl;
    cout << "Valor inicial de b: " << b << endl;

    // Modificamos los valores de a y b a través de los punteros
    *ptrA = 15;
    *ptrB = 30;

    cout << "\nValores modificados usando punteros:" << endl;
    cout << "Nuevo valor de a: " << a << endl;
    cout << "Nuevo valor de b: " << b << endl;

    // Mostramos las direcciones de memoria
    cout << "\nDireccion de a: " << ptrA << endl;
    cout << "Direccion de b: " << ptrB << endl;

    return 0;
}
