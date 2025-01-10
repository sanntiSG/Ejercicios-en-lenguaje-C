#include<stdio.h>

// row fila
// column columna
#define COL_MAX 3
void mostrar_matriz(char matriz[][3],int fil_max,int col_max);
void poner_ficha(char matriz[][3],int f,int c,char ficha);

int main()
{
    //int edades[COL_MAX];
    char matriz[][COL_MAX]={ {'_','_','_'} , {'_','_','_'} , {'_','_','_'} };

    mostrar_matriz(matriz,3,3);

    poner_ficha(matriz,1,0,'X');

    mostrar_matriz(matriz,3,3);

    poner_ficha(matriz,1,0,'O');

    mostrar_matriz(matriz,3,3);

return(0);
}

void poner_ficha(char matriz[][3],int f,int c,char ficha)
{
    if(matriz[f][c]=='_')
    {
    matriz[f][c]=ficha;
    }else
    {
    printf("Jugada invalida\n");
    }

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
    printf("\n");
}
