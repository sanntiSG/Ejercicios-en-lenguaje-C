#include <stdio.h>

/*Escriba un programa donde ingrese una serie de n�meros reales. Cuando
encuentra un valor mayor que 283, deja de leer e informa cuantos elementos
tiene la serie.*/


int main() {
    int contador = 0;
    float numero;

    printf("Ingrese una serie de n�meros reales. Para detenerse, ingrese un valor mayor que 283.\n");

    while (numero < 283) {
        printf("Ingrese un n�mero real: ");
        scanf("%f", &numero);

        contador++;
    }

    printf("La serie contiene %d elementos.\n", contador);

    return 0;
}
