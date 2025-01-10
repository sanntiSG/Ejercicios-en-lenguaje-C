#include<stdio.h>

// row fila
// column columna

void mostrar_matriz(int matriz[][3],int fil_max,int col_max);

int main()
{
    int matriz[][3]={ {7,8,9} , {4,5,6} , {1,2,3} };

    mostrar_matriz(matriz,3,3);



return(0);
}

void mostrar_matriz(int matriz[][3],int fil_max,int col_max)
{
    int f=0;
    int c=0;

    for(f=0;f<fil_max;f++)
    {
        for(c=0;c<col_max;c++)
        {
            printf("%d ",matriz[f][c]);
        }
        printf("\n");
    }
}
