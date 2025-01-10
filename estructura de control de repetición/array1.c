#include<stdio.h>

/*Crear un array de int, tamaño 5:
 llenarlo de números consecutivos a partir del 55.
mostrar su tamaño con sizeof.
Mostrar el valor de cada una de sus posiciones y el valor de dirección de memoria ram.//reflexionar.
*/
int main ()
{
    //array: Agrupador de variables repetitibas
    int TAM[5];
    /*tipo nombre/cantidad*/                      /*declaro un ARRAY FIJO, luego meto una variable dentro de este
                                                  y luego asigo valor de la variable dentro del array*/
    int incremento;

  for( incremento = 0; incremento<5; incremento++)
  {
      TAM[incremento] = 55 + incremento; /*se le suma incremento y no +1 ya que al imprimir
                                        si ponemos +1 se imprimira 56 en todas las lineas de TAM,
                                        entonces le sumamos + incremento ya que declaramos que si se cumplen
                                        ciertas condiciones, se sumara 55 + 1= 56+1=57+1 etc.*/

//dentro del array TAM, si se cumple (incremento) pasa lo siguiente
      printf("en la posicion %d, el valor es de %d\n",incremento, TAM[incremento]);
  }

return(0);

}

