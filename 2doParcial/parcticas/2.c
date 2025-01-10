#include<stdio.h>

/*Escribir un programa donde ingresa una serie de valores enteros y luego informe la cantidad de valores
pares e impares ingresados. El programa finaliza cuando se ingresa 0*/

int main (){

int numeros_enteros;
int contador=0;
int pares;
int impares;

printf("ingrese numeros: ");

while(numeros_enteros != 0){

    printf("numeros: ");
    scanf("%d", &numeros_enteros);

    contador++;
}


printf("cantidad de elementos: %d", contador);


return(0);
}
