#include<stdio.h>
#define tam 12
#define valor_inicial 0
int main ()
{
    //array: Agrupador de variables repetitibas
    int precios[tam];
    //tipo nombre/cantidad

    int indice=0;
    int valor=0;

    for(indice=0;indice<tam;indice=indice+1)
    {
    precios[indice]=valor;
    valor=valor+1;
   
    }

    for(indice=0;indice<tam;indice=indice+1)
    {
    printf("el valor %d esta en la posicion %d del array\n", precios[indice], indice);
    }//este for muestra el contenido de todas las posiciones


return(0);

}
