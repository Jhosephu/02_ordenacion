#include <bits/stdc++.h>

using namespace std;

void shellSort(int[], int);

int main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	shellSort(x, n);
	return 0;
}

void shellSort (int x[], int n){
	int k, cen, i, aux;
	k=n+1;
	while(k>0){
		k=k/2;
		cen=1;
		while(cen==1){
			cen=0;
			i=0;
			while(i+k<n){
				if(x[i+k]<x[i]){
					aux=x[i];
					x[i]=x[i+k];
					x[i+k]=aux;
					cen=1;
				}
				i++;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<x[i]<<"\t";
	}
}