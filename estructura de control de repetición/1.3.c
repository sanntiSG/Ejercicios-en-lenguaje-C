#include <stdio.h>

int main() {
    char nombre[100];
    int edad;
    long telefono;

    while (1) {
        printf("Ingrese el nombre ('FIN' para salir): ");
        scanf("%s", nombre);

        if (strcmp(nombre, "FIN") == 0) {
            break;
        }

        printf("Ingrese la edad en a�os: ");
        scanf("%d", &edad);

        printf("Ingrese el n�mero telef�nico: ");
        scanf("%ld", &telefono);

        if (edad % 2 == 0) {
            printf("%s tiene %d a�os, que es un n�mero par.\n", nombre, edad);
        } else {
            printf("%s tiene %d a�os, que es un n�mero impar.\n", nombre, edad);
        }
    }

    return 0;
}

