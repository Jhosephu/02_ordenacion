#include<bits/stdc++.h>

using namespace std;

void interder(int x[],int n);
void interizq(int x[], int n);

int main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	interizq(x, n);
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

void interizq(int x[], int n){
	int aux;
	for(int i=n; i>=0; i--){
		for(int j=n-1; j>0; j--){
			if(x[j]<x[j-1]){
				aux=x[j];
				x[j]=x[j-1];
				x[j-1]=aux;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<< x[i];
	}
}
