#include<iostream>
using namespace std; 

int main(){
	
	int matriz1[3][3]{
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}
	};
	
	int matriz2[3][3]{
	{9, 8, 7},
	{6, 5, 4},
	{3, 2, 1}
	};
	
	int producto[3][3];
	
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			producto[i][j]=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			for(int z=0; z<3; z++){
				producto[i][j]=producto[i][j]+matriz1[i][z]*matriz2[z][j];
			}
		}
	}

	cout<<"EL producto de matrices es: "<<endl;
	cout<<"Matriz A:"<<"\t"<<"Matriz B:"<<"\t"<<"Resultado:"<<endl;
	for(int i=0; i<3; i++){
		for (int j=0; j<3; j++)
		cout<<matriz1[i][j]<<" ";
        cout<<"          ";
	    for(int j=0; j<3; j++)
	        cout<<matriz2[i][j]<<" ";
	    cout<<"          ";
        for(int j=0; j<3; j++){
        	cout<<producto[i][j]<<" ";
        }
    cout<<endl;
}

	
}