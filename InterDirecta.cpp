#include<bits/stdc++.h>

using namespace std;

void interder(int x[],int n);
void interizq(int x[], int n);
void intercen(int x[], int n);

int main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	intercen(x, n);
	return 0;
}

void interder(int x[], int n){
	int aux;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
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
		for(int j=n-i; j>0; j--){
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
void intercen(int x[], int n){
	int aux, cen=1, i=0;
	while(i<n && cen==1){
		cen=0;
		for(int j=0; j<n-i; j++){
			if(x[j]>x[j+1]){
				aux=x[j];
				x[j]=x[j+1];
				x[j+1]=aux;
				cen=1;
			}
		}
		i++;
	}
	for(int i=0; i<n; i++){
		cout<< x[i];
	}
}
