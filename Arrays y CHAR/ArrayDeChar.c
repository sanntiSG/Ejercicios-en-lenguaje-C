#include<stdio.h>

int main()
{
    char palabra_1[100];
    char palabra_2[100];

    int contador_1=0;
    int contador_2=0;
    int posicion_1=0;
    int posicion_2=0;
    int total;

    printf("ingrese primer palabra: ");
    scanf("%s", &palabra_1);//EL NOMBRE DE UN ARRAY EQUVALE A SU PRIMER POSICION.

    printf("ingrese segunda palabra: ");
    scanf("%s", &palabra_2);



    while(palabra_1[posicion_1] != '\0')
    {
        contador_1 = contador_1 + 1;
        posicion_1 = posicion_1 + 1;
    }

    printf("La cantidad de caracteres es de %d\n", contador_1);


    while(palabra_2[posicion_2] != '\0')
    {
        contador_2 = contador_2 + 1;
        posicion_2 = posicion_2 + 1;
    }

    printf("La cantidad de caracteres es de %d\n", contador_2);

    total = contador_1 + contador_2;
    printf("la cantidad total de caracteres es de %d", total);
 return(0);


}
