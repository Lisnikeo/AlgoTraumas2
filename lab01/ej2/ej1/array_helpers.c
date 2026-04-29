#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//Agarra un arreglo, otro arreglo, y un largo
//Crea la variable i sin signo. MIentras i sea menor al largo
//El elemento del arreglo i se copia en el arreglo copia
void array_copy(int copy[], int array[], unsigned int length) {
    for (unsigned int i = 0u; i < length; ++i) {
        copy[i] = array[i];
    }
}

//Agarra un arreglo, un largo sin signado y un valor int
//Crea un contador en cero sin signo
//Crea un for que va desde i sin signo, hasta el largo
//Si el elemento del arrego es igual al valor suma uno al contador
//En resumen, se fija cuantos numero iguales al valor hay en el arreglo
unsigned int array_value_count(int a[], unsigned int length, int value) {
    unsigned int count = 0u;
    for (unsigned int i = 0u; i < length; ++i) {
        if (a[i] == value) {
            ++count;
        }
    }
    return count;
}


//Agarra un arreglo y un largo
//Imprime en la terminal el length y salta la linea
//La funcion muestra el arreglo en la terminal
void array_dump(int a[], unsigned int length) {
    fprintf(stdout, "%u\n", length);
    for (unsigned int i = 0u; i < length; ++i) {
        fprintf(stdout, "%i", a[i]);
        if (i < length - 1) {
            fprintf(stdout, " ");
        } else {
            fprintf(stdout, "\n");
        }
    }
}

//agarra 2 arreglos y un largo
//Da True si en 2 arreglos el mismo valor se repite la misma cantidad de veces
bool array_is_permutation_of(int a[], int b[], unsigned int length) {
    unsigned int i = 0u;
    bool result = true;
    while (i < length && result) {
        unsigned int a_count = array_value_count(a, length, a[i]);
        unsigned int b_count = array_value_count(b, length, a[i]);
        result = (a_count == b_count);
        i++;
    }
    return result;
}

//Cargar un arreglo de números desde un archivo de texto.
unsigned int array_from_file(int array[], unsigned int max_size, const char *filepath) {
    FILE *file = NULL;
    file = fopen(filepath, "r");
    if (file == NULL) {
        fprintf(stderr, "File does not exist.\n");
        exit(EXIT_FAILURE);
    }
    unsigned int i = 0u;
    unsigned int size = 0u;
    int res = 0;
    res = fscanf(file, " %u ", &size);
    if (res != 1) {
        fprintf(stderr, "Invalid array.\n");
        exit(EXIT_FAILURE);
    }
    if (size > max_size) {
        fprintf(stderr, "Allowed size is %d.\n", max_size);
        exit(EXIT_FAILURE);
    }
    while (i < size) {
        res = fscanf(file," %d ", &(array[i]));
        if (res != 1) {
            fprintf(stderr, "Invalid array.\n");
            exit(EXIT_FAILURE);
        }
       ++i;
    }
    fclose(file);
    return size;
}
