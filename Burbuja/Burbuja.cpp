#include<iostream>
using namespace std;

void llenar_arreglo(int* ptr);
void ordenar(int* ptr);
void imprimir(int*);


int main() {
	int ar[10];
	int* ptrc;
	ptrc = ar;
	llenar_arreglo(ptrc);
	imprimir(ptrc);

	}

void llenar_arreglo(int* ptr) {
	for (int i = 0;i < 10;i++) {
		cout << "Dame los numeros del arreglo: ";
		cin >> ptr[i];
	}
}

void ordenar(int* ptr) {
	int z, x,n;
	for (z = 0;z < 10;z++) {
		for (x = 0;x < 10;x++) {
			if (ptr[x] > ptr[x + 1]) {
				n = ptr[x];
				ptr[x] = ptr[x + 1];
				ptr[x+1] = n;
			}
		}
	}
}

void imprimir(int* ptr) {
	cout << "Original"<<endl;
	for (int i = 0;i < 10;i++) {
		cout << ptr[i]<<" ";
	}
	cout << endl;

	ordenar(ptr);
	cout << "Ordenada" << endl;
	for (int i = 0;i < 10;i++) {
		cout << ptr[i] << " ";
	}
}