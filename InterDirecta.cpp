#include<bits/stdc++.h>

using namespace std;

void interder(int x[],int n);


int main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	interder(x, n);
	return 0;
}

void interder(int x[], int n){
	int aux;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(x[j]>x[j+1]){
				aux=x[j];
				x[j]=x[j+1];
				x[j+1]=aux;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<< x[i];
	}
}