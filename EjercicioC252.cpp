//Gloder Rodriguez
//Programa: Evaluador de rendimiento académico.
//Este programa calcula el promedio de tres calificaciones e indica el nivel de rendimiento del estudiante.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    float nota1, nota2, nota3, promedio;

    // Entrada de datos
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    // Cálculo del promedio
    promedio = (nota1 + nota2 + nota3) / 3;

    cout << "\n==============================\n";
    cout << "Estudiante: " << nombre << endl;
    cout << "Promedio final: " << promedio << endl;

    // Evaluación del rendimiento con condicionales
    if (promedio >= 9.0 && promedio <= 10.0) {
        cout << "Rendimiento: Excelente" << endl;
    } 
    else if (promedio >= 7.0 && promedio < 9.0) {
        cout << "Rendimiento: Bueno" << endl;
    } 
    else if (promedio >= 5.0 && promedio < 7.0) {
        cout << "Rendimiento: Regular" << endl;
    } 
    else if (promedio >= 0.0 && promedio < 5.0) {
        cout << "Rendimiento: Insuficiente" << endl;
    } 
    else {
        cout << "Error: las notas ingresadas no son válidas." << endl;
    }

    // Condicional extra: aprobar o reprobar
    if (promedio >= 7.0) {
        cout << "Estado: Aprobado" << endl;
    } else {
        cout << "Estado: Reprobado" << endl;
    }

    cout << "==============================\n";

    return 0;
}
