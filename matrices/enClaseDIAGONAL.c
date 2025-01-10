#include<stdio.h>

#define MAX_F 3
#define MAX_C 3

void cargarMatriz(int[][MAX_C]);
void imprimirDiagIz(int [][MAX_C]);
void imprimirDiagDer(int[][MAX_C]);
int main(void){

    int matriz[MAX_F][MAX_C];
    cargarMatriz(matriz);
    imprimirDiagIz(matriz);
    imprimirDiagDer(matriz);
    return 0;
}

void cargarMatriz(int matriz[][MAX_C]){

    int valor = 0;

    for(int i = 0; i < MAX_F; i++){
        for(int j = 0; j < MAX_C; j++){
            matriz[i][j] = ++valor;

        }


    }

}


void imprimirDiagIz(int matriz[][MAX_C]){

    for(int i = 0; i < MAX_F; i++){
        for(int j = 0; j < MAX_C; j++){
            if(i == j){
                printf("%d ", matriz[i][j]);
            }else{
                printf("0 ");
            }
        }

        printf("\n");
    }


}


void imprimirDiagDer(int matriz[][MAX_C]){

       for(int i = 0; i < MAX_F; i++){
        for(int j = 0; j < MAX_C; j++){
            if(j == MAX_C - 1 - i){
                printf("%d ", matriz[i][j]);
            }else{
                printf("0 ");
            }
        }

        printf("\n");
    }

}
