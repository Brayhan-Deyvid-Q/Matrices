/*4) Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante*/

#include<iostream>
using namespace std; 

void llenadoMatriz(int matriz[][50],int filas,int columnas){
	int c=0;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Ingrese el valor "<<c<< " de la matriz: ";
			cin>>matriz[i][j];
			c++;
		}
	}
	cout<<endl<<endl; 
}


void mostrarMatriz(int matriz[][50], int filas, int columnas){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl; 
	}
	
} 

void cambioFilas(int matriz[][50], int filas, int columnas, int cambio1, int cambio2){
	int aux[50][50];
	int cambioaux1, cambioaux2;
	if(cambio1<cambio2){
		cambioaux1=cambio1;
		cambioaux2=cambio2;
	}else{
		cambioaux1=cambio2;
		cambioaux2=cambio1;
	}
	for(int j=0; j<columnas; j++){
		aux[cambioaux1][j]=matriz[cambioaux1][j];
		matriz[cambioaux1][j]=matriz[cambioaux2][j];
		matriz[cambioaux2][j]=aux[cambioaux1][j];
	}
	cout<<"Las filas a cambiar son: fila "<<cambio1<<" y fila "<<cambio2<<endl;
}

int main(){
	int matriz[50][50];
	int filas, columnas, filacambiar1, filacambiar2;
	
	cout<<"Ingrese la cantidad de filas de la matriz: ";
	cin>>filas;
	cout<<"Ingrese la cantidad de columnas de la matriz: ";
	cin>>columnas;
	cout<<"Ingrese los valores de la matriz: "<<endl;
	llenadoMatriz(matriz, filas, columnas);
	cout<<"Ingrese la primera fila a cambiar: ";
	cin>>filacambiar1;
	cout<<"Ingrese la segunda fila a cambiar: ";
	cin>>filacambiar2;
	mostrarMatriz(matriz, filas, columnas);
	cambioFilas(matriz, filas, columnas, filacambiar1, filacambiar2);
	mostrarMatriz(matriz, filas, columnas);
}