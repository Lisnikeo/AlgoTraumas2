#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "intercalated_sort.h"

/**
 * @brief Ordena las posiciones pares del arreglo (0-based)
 * usando el algoritmo de ordenación por inserción.
 */

void insert (int a[], int i){
    int j = i;
    int strox;
    while (j >= 2 && a[j] < a[j-2])
    {
     strox = a[j];
     a[j] = a[j-2];
     a[j-2] = strox;
     j=j-2;
    }
}

void intercalated_sort(int a[], int length) {
    for (int i = 2; i < length; i++){
            if (i%2 == 0){
                insert (a, i);

             } }

}


