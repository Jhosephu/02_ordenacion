#include <bits/stdc++.h>

using namespace std;

void intInserBin(int[], int);

int main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	intInserBin (x, n);
	return 0;
}

void intInserBin (int x[], int n){
	int aux, k, izq, der, m, j;
	for(int i=1; i<n; i++){
		aux=x[i];
		izq=0;
		der=i-1;
		while( izq<=der){
			m=(izq+der)/2;
			if(aux<x[m]){
				der=m-1;
			}
			else{
				izq=m+1;
			}
		}
		j=i-1;
		while(j>=izq){
			x[j+1]=x[j];
			j--;
		}
		x[izq]=aux;
	}
	for(int i=0; i<n; i++){
		cout<<x[i]<<"\t";
	}
}