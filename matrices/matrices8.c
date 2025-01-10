#include<stdio.h>

// row fila
// column columna
#define COL_MAX 3
void mostrar_matriz(char matriz[][3],int fil_max,int col_max);

int main()
{
    //int edades[COL_MAX];
    char matriz[][COL_MAX]={ {'_','_','_'} , {'_','_','_'} , {'_','_','_'} };

    mostrar_matriz(matriz,3,3);

    matriz[1][0]='X';

    mostrar_matriz(matriz,3,3);

    matriz[1][0]='O';

    mostrar_matriz(matriz,3,3);

return(0);
}

void mostrar_matriz(char matriz[][COL_MAX],int fil_max,int col_max)
{
    int f=0;
    int c=0;

    for(f=0;f<fil_max;f++)
    {
        for(c=0;c<col_max;c++)
        {
            printf("%c ",matriz[f][c]);
        }
        printf("\n");
    }
}
