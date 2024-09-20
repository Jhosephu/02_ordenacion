#include <bits/stdc++.h>

using namespace std;

void intInserDir(int[], int);

int main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	intInserDir (x, n);
	return 0;
}

void intInserDir (int x[], int n){
	int aux, k;
	for(int i=1; i<n; i++){
		aux=x[i];
		k=i-1;
		while(k>=0 and aux<x[k]){
			x[k+1]=x[k];
			k=k-1;
		}
		x[k+1]=aux;
	}
	for(int i=0; i<n; i++){
		cout<<x[i]<<\tb;
	}
}