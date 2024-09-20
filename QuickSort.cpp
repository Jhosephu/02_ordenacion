#include <bits/stdc++.h>

using namespace std;

void quickSort(int[], int);
void reduce (int x[], int inicio, int final);

int main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	quickSort (x, n);
	for(int i=0; i<n; i++){
		cout<<x[i]<<"\t";
	}
	return 0;
}

void quickSort(int x[], int n){
	reduce(x, 0, n-1);
}

void reduce (int x[], int inicio, int final){
	int izq, der, pos, cen, aux;
	izq=inicio;
	der=final;
	pos=izq;
	cen=1;
	while(cen==1){
		cen=0;
		while(x[pos]<=x[der] and pos!=der){
			der=der-1;
		}
		if(pos!=der){
			aux=x[pos];
			x[pos]=x[der];
			x[der]=aux;
			pos=der;
			while (x[pos]>=x[izq] and pos!=izq){
				izq++;
			}
			if(pos!=izq){
				aux=x[pos];
				x[pos]=x[izq];
				x[izq]=aux;
				pos=izq;
				cen=1;
			}
		}
		if(pos-1>inicio){
			reduce(x, inicio, pos-1);
		}
		if(final>pos+1){
			reduce(x, pos+1, final);
		}
	}
}