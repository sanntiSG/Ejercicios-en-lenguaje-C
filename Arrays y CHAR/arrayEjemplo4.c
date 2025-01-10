
#include <stdio.h>
#define tam 5

int main()
{
    int precios[tam];
    int indice = 0;
    int posicion;

    for (indice = 0; indice < tam; indice = indice + 1)
    {
     precios[indice] = indice + 1;
     printf("ingrese un numero entero para colocar en la posicion %d\n", indice);
     scanf("%d",&(precios[indice]) );//nombre del array y posicion q quiero averiguar
    }

    printf("elige una posicion de 0 a 4 para ver su valor\n");
    scanf("%d", &posicion);
    if (posicion >= 0 && posicion < tam)
    {
        printf("para la posicion %d, el valor es de: %d\n", posicion, precios[posicion]);
    }
    else
    {
        printf("posicion invalida\n");
    }
    return 0;
}
