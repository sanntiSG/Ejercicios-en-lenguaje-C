#include<stdio.h>

int main() {
    int a;
    int b;
    int suma;
    int resta;

    printf("Ingrese dos n�meros. El programa finaliza si alguno de los n�meros es negativo.\n");

    while (1) {
        printf("Ingrese el n�mero A: ");
        scanf("%d", &a);

        printf("Ingrese el n�mero B: ");
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

