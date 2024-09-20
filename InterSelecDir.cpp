#include <iostream>

using namespace std;

void intSelecDir (int, int);

nt main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	intSelecDir(x, n);
	return 0;
}

void intSelecDir (int, int){
	int menor, k;
	for(int i=0; i<n-1; i++){
		menor=x[i];
		k=i;
		for(int j=i+1; j<n; j++){
			if(x[j]<menor){
				menor=x[j];
				k=j;
			}
		}
		x[k]=x[i];
		x[i]=menor;
	}
	for(int i=0; i<n; i++){
		cout<< x[i];
	}
}