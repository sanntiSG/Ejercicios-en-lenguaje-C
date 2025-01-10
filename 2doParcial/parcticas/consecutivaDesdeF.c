#include<stdio.h>
#define TAM 5
/*Crear un array de char, tamaño 5:
 llenarlo de letras consecutivas a partir del ‘f’.
*/

int main()
{
char array[TAM];
int i=0;

    for(i = 0; i < TAM; i ++){
    array[i]= 'f' + i; // f + cada iteracion, no  importa que sean numeros, f + 1 = g; g + 1= h; etc...
        printf("%c\n", array[i]);
    }

    return 0;
}

