#include<stdio.h>
#define COL 3
#define FIL 3
/*1)En el main declar� un arreglo bidimensional(matriz)
de enteros de tama�o 3x3, utiliz� #define para dimensionarla*/

/*2)Declar� e implement� un funci�n llamada cargarMatriz que reciba
como par�metro la matriz y la llene con n�meros enteros consecutivos
 del 1 al 9 (ambos incluidos).La funci�n NO devuelve valores!!!*/

 /*3)Declar� e implement� un funci�n llamada imprimirMatriz que reciba
como par�metro la matriz y la imprima de forma matricial, dicho de otro
modo, deber�as ver por consola:
 1 2 3
 4 5 6
 7 8 9*/

/*2)*/ void cargarMatriz (int matriz[FIL] [COL] );
/*3)*/ void imprimirMatriz ( int matriz[FIL][COL] );
int main ()
{
/*1)*/ int matriz [FIL][COL];
/*2)*/  cargarMatriz(matriz);
/*3)*/  imprimirMatriz(matriz);

return(0);
}

/*2)*/ void cargarMatriz (int matriz[FIL] [COL]) {
   int contador = 1;
   for (int f = 0; f < FIL; f++){
         for (int c = 0; c < COL; c++){
               matriz[f] [c] = contador++;
         }
   }
}

/*3)*/ void imprimirMatriz ( int matriz[FIL][COL] ) {

    for(int f = 0; f < FIL; f++){
        for(int c = 0; c < COL; c++){
            printf("%d ", matriz[f][c]);
        }
        printf("\n");
    }
}
