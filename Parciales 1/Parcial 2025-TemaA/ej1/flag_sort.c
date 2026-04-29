#include "flag_sort.h"

void swap(color_t a[], int i, int j);

/**
 * @brief Ordenar un arreglo de tres colores RED, WHITE y BLUE.
 *
 * Dado un arreglo cuyos elementos son tres colores posibles RED, WHITE y BLUE,
 * ordenarlos de manera que queden todos los RED primero, después todos los 
 * WHITE y al final todos los BLUE, formando la bandera de Córdoba.
 * 
 * @param a Arreglo de colores.
 * @param length Largo del arreglo.
 */
void flag_sort(color_t a[], int length) {
    // COMPLETAR
    int i = 0;
    int j = 0;
    int k = length -1; 

    while (j <= k){
        //cambio el rojo con el primero no ordenado
        if (a[j] == red){
            swap(a, i, j);
            i++;
            j++;
        }
        //cambio el azul con el ultimo desordenado
        else if (a[j] == blue){
            swap(a, j, k);
            k--;
        }
        //dejo el white donde esta
        else if (a[j] == white){
            j++;
        }


    }
}

void swap(color_t a[], int i, int j) {
    color_t tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}
