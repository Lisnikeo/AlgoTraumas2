#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"


static void quick_sort_rec(int a[], unsigned int izq, unsigned int der) {
 /* needs implementation */

    /* no implementes partition, ya está implementado en sort_helpers.o
       (no se puede leer, pero en sort_helpers.h vas a encontrar información
        para saber cómo usarlo)
    */
   
   
   
   if (der > izq) {
    unsigned int pivot = partition(a, izq, der);
    
    // Solo llamo a la izquierda si el pivot no es el primer elemento
    if (pivot > izq) {
        quick_sort_rec(a, izq, pivot - 1);
    }
    
    // Solo llamo a la derecha si el pivot no es el último elemento
    if (pivot < der) {
        quick_sort_rec(a, pivot + 1, der);
    }
}
}

void quick_sort(int a[], unsigned int length) {
    quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1);
}