#include<iostream>
#include<windows.h>
using namespace std; 

void buscarValor(int matriz[][3], int valor){
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if (valor==matriz[i][j]){
			    cout<<"Fila "<<i<<" columna "<<j<<endl;
			}
		}
	}
}

int main(){
	int valor;
	SetConsoleOutputCP(CP_UTF8);

	
	int matriz[3][3]={
	    {1, 2, 3},
	    {4, 2, 6},
	    {7, 2, 9}
	};
	
	cout<<"De la siguiente matriz: "<<endl; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Indique el número a buscar en la matriz: ";
	cin>>valor;
	
	cout<<"El valor "<<valor<<" se encuentra en: "<<endl;
	buscarValor(matriz, valor);
	
	return 0;
}