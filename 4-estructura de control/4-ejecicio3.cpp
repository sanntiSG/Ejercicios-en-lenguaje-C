#include<stdio.h>

/*El usuario indicara el tipo de pieza, peón, alfil, caballo, reina, rey, torre.
Se mostrara un mensaje indicando, que movimientos tiene permitidos, adelante, atras, diagonal, L, etc.
*/
 
int main ()
{

    char pieza[10];

    printf("Indique su pieza: peon, alfil, caballo, reina, rey o torrre.\n");
    scanf("%s", pieza);
                //comparacion de caracteres
    if (pieza[0] == 'p' && pieza[1] == 'e' && pieza[2] == 'o' && pieza[3] == 'n' && pieza[4] == '\0')
    {
        printf("El valor de la moto es de $200\n");
    }
    
   else if (pieza[0] == 'a' && pieza[1] == 'l' && pieza[2] == 'f' && pieza[3] == 'i' && pieza[4] == 'l' && pieza[5] == '\0')
   {
   	printf("caca");
   }

return(0);
}
