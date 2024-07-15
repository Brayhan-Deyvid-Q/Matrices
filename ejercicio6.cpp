/*Reflejar una Imagen: Implemente un programa que refleje horizontalmente una 
imagen representada por una matriz de 6x6. El programa debe intercambiar los 
elementos de cada fila para obtener la imagen reflejada.*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std; 

void mostrarMatriz(int matriz[][50]){
	int numero;
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			numero = rand()%100;
			cout<<numero<<"\t";
			matriz[i][j]=numero;
		}
		cout<<endl; 
	}
}

void matrizReflejada(int matriz[][50]){
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<"\t\t";
		for(int z=5; z>=0; z--){
			cout<<matriz[i][z]<<"\t";
		}
		cout<<endl;
	}
}

int main(){
	int matriz[50][50];
	cout<<"La matriz: "<<endl;
	mostrarMatriz(matriz);
	cout<<"La matriz reflejada: "<<endl;
	matrizReflejada(matriz);
	
	
}