#include<stdio.h>
#define TAM 5
//dar valor para cada posicion del array
int main()
{
 int precios [TAM];
 int iterador=0;

 for(iterador=0; iterador<TAM; iterador++){
    precios[iterador]=iterador;/*se hace esto, ya que la variable iterador esta utilizada para una iteracion,
                                entonces, array = iterador para que, por cada loop que de iterador y este cambie su posicion,
                                la posicion del array cambiara a la misma que la del iterador
                                */


    printf("ingrese un valor para poner en la posicion %d del array\n", iterador);
    scanf("%d", &(precios[iterador]));

 }

 for(iterador=0; iterador<TAM; iterador++){

    printf("el valor %d se encuentra en la posicion %d del array\n", precios[iterador], iterador);

 }


    return 0;
}
