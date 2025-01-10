#include<stdio.h>

int main() {
    int enteros;
    int pares = 0;
    int impares = 0;

    printf("Ingrese números enteros mayores que 0. El programa finaliza cuando se ingresa 0.\n");

    while (1) {
        printf("Ingrese un número: ");
        scanf("%d", &enteros);

        if (enteros == 0) {
            break;
        }

        else if (enteros % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Cantidad de valores pares: %d\n", pares);
    printf("Cantidad de valores impares: %d\n", impares);

    return 0;
}

