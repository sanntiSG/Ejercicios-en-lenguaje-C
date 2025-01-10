#include<stdio.h>

/* Escribir un programa que imprima la tabla de multiplicación
de cualquier número de 0 a 10 ingresado por teclado.
*/

int main() {
    int numero_random;

    printf("Ingrese un numero ENTERO para ver su tabla de multiplicacion del 0 al 10\n");
    scanf("%d", &numero_random);

    printf("Tabla de multiplicar del %d:\n", numero_random);

    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", numero_random, i, numero_random * i);
    }

    return 0;
}
