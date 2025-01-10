#include <stdio.h>
#include <string.h>

/* En un juego de truco, el usuario ingresará 3 cartas,
   el programa indicará si tiene envido (y cuánto) o si tiene flor. */
int main() {
    int valor1;
    int valor2;
    int valor3;
    char str1[10];
    char str2[10];
    char str3[10];
    int envido;

    printf("Ingrese carta 1 (p.ej., espada, oro, basto, copa):\n");
    scanf("%s", str1);

    printf("Ingrese carta 2 (p.ej., espada, oro, basto, copa):\n");
    scanf("%s", str2);

    printf("Ingrese carta 3 (p.ej., espada, oro, basto, copa):\n");
    scanf("%s", str3);

    // Ingresar valores de las cartas
    printf("Ingrese SOLO el valor de carta 1 (1-12, sin 8 y 9):\n");
    scanf("%d", &valor1);

    printf("Ingrese SOLO el valor de carta 2 (1-12, sin 8 y 9):\n");
    scanf("%d", &valor2);

    printf("Ingrese SOLO el valor de carta 3 (1-12, sin 8 y 9):\n");
    scanf("%d", &valor3);

    // Si las tres cartas son del mismo palo, tiene flor
    if (strcmp(str1, str2) == 0 && strcmp(str1, str3) == 0) {
        printf("Tienes flor.\n");
    }
    // Si hay dos cartas del mismo palo, hay envido
    else if (strcmp(str1, str2) == 0) {
        envido = valor1 + valor2 + 20;
        printf("Tienes un envido de %d con las cartas %d de %s y %d de %s.\n", envido, valor1, str1, valor2, str2);
    }
    else if (strcmp(str1, str3) == 0) {
        envido = valor1 + valor3 + 20;
        printf("Tienes un envido de %d con las cartas %d de %s y %d de %s.\n", envido, valor1, str1, valor3, str3);
    }
    else if (strcmp(str2, str3) == 0) {
        envido = valor2 + valor3 + 20;
        printf("Tienes un envido de %d con las cartas %d de %s y %d de %s.\n", envido, valor2, str2, valor3, str3);
    } else {
        printf("No tienes envido ni flor.\n");
    }

    return 0;
}
