#include<stdio.h>
#define TAM 5
/*Crear un array de int, tamaño 5:
 llenarlo de números consecutivos a partir del 55.
*/

int main()
{
 int crecimiento [TAM];
 int iterador=0;

 for(iterador=0; iterador<TAM; iterador++){
    crecimiento[iterador]=55+iterador; //le sumas una iteracion, osea 1 vuelta 55+1 otra vuelta 55+2 etc...
                                       //55 + cada vuelta que itera. 1 vuelta 2 vueltas etc < que TAM

 }

 for(iterador=0; iterador<TAM; iterador++){

    printf("el valor %c se encuentra en la posicion %d del array\n", crecimiento[iterador], iterador);

 }


    return 0;
}
