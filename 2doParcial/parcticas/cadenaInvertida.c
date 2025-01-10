#include <stdio.h>

int main() {
char original[50];
char copia[50];
int contador = 0;
int i = 0;
int j = 0;

printf("Escriba una cadena: ");     scanf(" %s", original);

for (i = 0; original[i] != '\0' ; i++) { //sumas hasta llegar al FINAL
    contador++;
}

for (j = 0; j < contador; j++) {  // j tiene que ser menor al FINAL (FINAL=CONTADOR)

    copia[j] = original[contador - 1 - j];
}
printf("Cadena invertida: %s", copia);

return 0;
}
