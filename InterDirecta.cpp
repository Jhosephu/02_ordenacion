#include<bits/stdc++.h>

using namespace std;

void interder(int x[],int n);
void interizq(int x[], int n);
void intercen(int x[], int n);
void interbin(int x[], int n);
void interbin2(int x[], int n);

int main(){
	int x[100], n;
	cout<<"ingrese la cantidad de elementos para el arreglo: "; cin>>n;
	cout<<"ingrese los numeros del arreglo: ";
	for(int i=0; i<n; i++){
		cin>> x[i];
	}
	interbin(x, n);
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

void interbin(int x[], int n){
	int aux;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(x[j]>x[j+1]){
				aux=x[j];
				x[j]=x[j+1];
				x[j+1]=aux;
			}
		}
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

void interbin2(int x[], int n){
	int izq=1, der=n, k=n, aux;
	while(izq<=der){
		for(int i=der; i>=izq; i--){
			if(x[i-1]>x[i]){
				aux= x[i-1];
				x[i-1]=x[i];
				x[i]=aux;
				k=i;
			}
		}
		izq=k+1;
		for(int i=izq; i<=der; i++){
			if(x[i-1]>x[i]){
				aux= x[i-1];
				x[i-1]=x[i];
				x[i]=aux;
				k=i;
			}
		}
		der=k-1;
	}
	for(int i=0; i<n; i++){
		cout<< x[i];
	}
}
