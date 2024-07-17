/*Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz
cuadrada en la que la primera fila contiene los N primeros números naturales y cada una de las
siguientes N-1 filas contiene la rotación de la fila anterior un lugar a la derecha. Ejemplo: Cuadrado
latino de orden 4.*/



#include <iostream>
using namespace std;

void CuadradoLatino(int orden) {
    int cuadrado[50][50];

    for (int j = 0; j < orden; ++j) {
        cuadrado[0][j] = j + 1;
    }

    for (int i = 1; i < orden; ++i) {
        int most = cuadrado[i-1][orden-1];
        for (int j = orden-1; j > 0; --j) {
            cuadrado[i][j] = cuadrado[i-1][j-1];
        }
        cuadrado[i][0] = most;
    }

    cout << "Cuadrado Latino de orden " << orden << ":" << endl;
    for (int i = 0; i < orden; ++i) {
        for (int j = 0; j < orden; ++j) {
            cout << cuadrado[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int orden;
    cout<<"Ingrese el orden del cuadrado: ";
    cin>>orden;
    CuadradoLatino(orden);
    return 0;
}