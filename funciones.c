#include <stdio.h>
#include "funciones.h"

// Función para calcular la media
float calcularMedia(int arr[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arr[i];
    }
    return (float)suma / size;
}

// Función para calcular la moda
void encontrar_moda(int numeros[], int tamano) {
    int max_frecuencia = 0, moda = -1;

    for (int i = 0; i < tamano; i++) {
        int frecuencia = 0;

        for (int j = 0; j < tamano; j++) {
            if (numeros[i] == numeros[j]) {
                frecuencia++;
            }
        }

        // Si la frecuencia actual es mayor que la máxima frecuencia encontrada,
        // actualizamos la moda y la máxima frecuencia.
        if (frecuencia > max_frecuencia) {
            max_frecuencia = frecuencia;
            moda = numeros[i];
        }
    }

    // Verificar si la moda se repite más de una vez
    if (max_frecuencia > 1) {
        printf("La moda es %d y se repite %d veces.\n", moda, max_frecuencia);
    } else {
        printf("No existe un número que se repita.\n");
    }
}
                  
// Función para ordenar el arreglo
void ordenar(int arr[], int size, int *mayor, int *menor, float *mediana) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    *mayor = arr[9];
    *menor = arr[0];
    *mediana = arr[4];
}