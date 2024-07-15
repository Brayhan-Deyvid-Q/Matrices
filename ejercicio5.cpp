/*Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y 
el valor mínimo en una matriz de 4x4, indicando sus posiciones.*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std; 

void mostrarMatriz(int matriz[][50], int fila, int columna){
	int numero;
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
			numero = rand()%100;
			cout<<numero<<"\t";
			matriz[i][j]=numero;
		}
		cout<<endl; 
	}
}

void buscarMayor(int matriz[][50], int filas, int columnas){
	int mayor=1; 
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if (mayor<matriz[i][j]){
				mayor=matriz[i][j];
			}
		}
	}
	cout<<mayor;
}
void buscarMenor(int matriz[][50], int filas, int columnas){
	int menor=100;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if(menor>matriz[i][j]){
				menor=matriz[i][j];
			}
		}
	}
	cout<<menor;
}

int main(){
	int matriz[50][50];
	int filas, columnas; 
	cout<<"Ingrese la cantidad de filas de la matriz: ";
	cin>>filas; 
	cout<<"Ingrese la cantidad de columnas: ";
	cin>>columnas; 
	cout<<"Matriz: "<<endl;
	mostrarMatriz(matriz, filas, columnas);
	cout<<"El mayor valor es: ";
	buscarMayor(matriz, filas, columnas);
	cout<<"\n";
	cout<<"El menor valor es: ";
	buscarMenor(matriz, filas, columnas);
	

}