#include<stdio.h>

int main() {
    int a;
    int b;
    int suma;
    int resta;

    printf("Ingrese dos números. El programa finaliza si alguno de los números es negativo.\n");

    while (1) {
        printf("Ingrese el número A: ");
        scanf("%d", &a);

        printf("Ingrese el número B: ");
        scanf("%d", &b);

        if (a < 0 || b < 0) {
            break;
        }

        suma = a + b;
        resta = a - b;

        printf("El resultado de %d + %d es %d\n", a, b, suma);
        printf("El resultado de %d - %d es %d\n", a, b, resta);
    }

    return 0;
}

