/*
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 16 de septiembre de 2020
 * Resumen: Programa que solicita un número entero al usuario y lo escribe en 
 *          pantalla.
 */
#include <iostream>
using namespace std;

int main() {
    int numero1,numero2,suma=0;
    cout << "Escriba dos numeros enteros separados por un espacio: ";
    cin>>numero1>>numero2;
    
    suma = numero1 + numero2;
    cout<<"Su suma es: "<<suma<<endl;
    
    

    return 0;
}
