#include<stdio.h>
#define tam 5

//Crear un array de char, tamaño 5
//llenarlo de letras consecutivas a partir del ‘f’.

int main()
{
 char array [tam];
 char letra     = 'f';

  for (letra = 0; letra < tam; letra ++)
 {
   array[letra] = 'f' + letra;
   printf ("El valor %c esta en la posicion %d del array\n", array[letra], letra);
 }

return (0);
}
