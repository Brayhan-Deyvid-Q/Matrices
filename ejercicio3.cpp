#include<iostream>
using namespace std;
void mostrarMatriz(int matriz[][4]){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

void llenadoMatriz(int matriz[][4]){
	int a=0; 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
		cout<<"valor "<<a<<" de la matriz: ";
		cin>>matriz[i][j];
		a++;
		}
	}
	
}

int sumaDiagonalprincipal(int matriz[][4]){
	int suma=0;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if (i==j){
				suma+=matriz[i][j];
			}
		}
	} 
	return suma;
}

int sumaDiagonalsecundaria(int matriz[][4]){
	int suma=0;
	int j=3;
	for(int i=0; i<4; i++){
	    suma+=matriz[i][j];
	    j--;
	}
	return suma;
}

int main(){
	int sumafinal;
	int matriz[4][4];
	
	cout<<"Ingrese los valores de la primera matriz:"<<endl; 
	llenadoMatriz(matriz);
	
	cout<<"La matriz:"<<endl;
	mostrarMatriz(matriz);
	
	cout<<"La suma de la diagonal principal es: ";
	cout<<sumaDiagonalprincipal(matriz);
	cout<<endl;
	cout<<"La suma de la diagonal secundaria es: ";
	cout<<sumaDiagonalsecundaria(matriz);
	cout<<endl;
	cout<<"La suma de las dos diagonales es: ";
	sumafinal=sumaDiagonalprincipal(matriz)+sumaDiagonalsecundaria(matriz);
	cout<<sumafinal;
}
