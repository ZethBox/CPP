#include <iostream>
using namespace std;

//Metodos de ordenamiento sencillo para enteros
void ordenarBurbuja(int size, int* arreglo);
void ordenarSeleccion(int size, int* arreglo);
void ordenarInsercion(int size, int* arreglo);
void ordenarShell(int size, int* arreglo);

//Metodos auxiliares
void swap(int* arreglo, int i, int j);
void imprimirArreglo(int size, int* arreglo);


int main() {
    int arreglo[] = {1, 3, 7, 9, 18, 27, 2, 4, 5, 1, 3};

    imprimirArreglo(11, arreglo);
    ordenarInsercion(11, arreglo);
    imprimirArreglo(11, arreglo);
}

void ordenarBurbuja(int size, int* arreglo) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arreglo[i] > arreglo[j]) {
                swap(arreglo, i, j);
            }
        }
    }
}

void ordenarSeleccion(int size, int* arreglo) {
    int i,j, menor, indiceMenor;
    for(i = 0; i < size-1; i++) {
        menor = arreglo[i];
        indiceMenor = i;
        for(j = i+1; j < size; j++) {
            if(arreglo[j] < menor) {
                menor = arreglo[j];
                indiceMenor = j;
            }
        }
        if(indiceMenor != i) {
            swap(arreglo, i, indiceMenor);
        }
    }
}

void ordenarInsercion(int size, int* arreglo) {
    for(int i = 1; i < size; i++) {
        int actual = i;
        int j = i;
        while(j > 0) {
            if(arreglo[actual] < arreglo[--j]) {
                swap(arreglo, actual, j);
                actual = j;
            }
            else {
                j = 0;
            }
        }
    }
}

void swap(int* arreglo, int i, int j) {
    int temp = arreglo[i];
    arreglo[i] = arreglo[j];
    arreglo[j] = temp;
}

void imprimirArreglo(int size, int* arreglo) {
    for(int i = 0; i < size; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}
