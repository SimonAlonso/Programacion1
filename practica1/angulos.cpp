/*
 * Curso de Programación 1. Práctica 1
 * Autores: Miguel Ángel Latre y Javier Martínez
 * Última revisión: 30 de septiembre de 2019
 * Resumen: Tarea 6
 */
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;


int main() {
    const int ANCHO = 9;
    cout <<setw(9) <<"Grados"<<setw(9) << "Radianes"<<setw(9) << "Seno"<<setw(9) << "Coseno" << endl;

    cout <<setw(9) <<"========"<<setw(9) << "========"<< setw(9) << "========"<<setw(9) << "========" << endl;

    
    for (double grados = 0; grados <= 180; grados += 10) {
        double radianes = M_PI * grados / 180.0;
        cout <<fixed<<setprecision(0)<<setw(9)<< grados <<setprecision(4)<<setw(9) << radianes <<setprecision(4)<<setw(9) << sin(radianes) <<setprecision(4)<<setw(9) << cos(radianes) << endl;
    }

    return 0;
}
