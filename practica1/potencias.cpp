/*
 * Curso de Programación 1. Práctica 1
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 20 de septiembre de 2019
 * Resumen: Tarea 5
 */
#include <iostream>
#include<iomanip>
using namespace std;


int main() {   
    cout <<setw(3)<< "x" <<setw(7)<< "x^2" <<setw(7)<< "x^3" << endl;
    cout << "===" <<setw(7)<< "===" <<setw(7)<< "===" << endl;

    for (int x = 1; x <= 24; x++) {
        cout <<setw(3)<< x <<setw(7)<< x * x <<setw(7)<< x * x * x << endl;
    }

    return 0;
}
