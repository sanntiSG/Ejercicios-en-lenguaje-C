#include<stdio.h>
#define COL 3
#define FIL 3
/*1)En el main declará un arreglo bidimensional(matriz)
de enteros de tamaño 3x3, utilizá #define para dimensionarla*/

/*2)Declará e implementá un función llamada cargarMatriz que reciba
como parámetro la matriz y la llene con números enteros consecutivos
 del 1 al 9 (ambos incluidos).La función NO devuelve valores!!!*/

 /*3)Declará e implementá un función llamada imprimirMatriz que reciba
como parámetro la matriz y la imprima de forma matricial, dicho de otro
modo, deberías ver por consola:
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
