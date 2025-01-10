#include<stdio.h>
#include<string.h>//incluyo la librería string.h



int main(void){
    
    char palabra_A[]   = "sol";//declaro un arreglo de char y le asigno el valor
    char palabra_B[20];           //declaro el segundo arreglo
                                  //donde guardaré la cadena que ingresará el usuario
    
    
    printf("Ingrese palabra a comparar con la palabra_A:\t");
    scanf(" %s", &(palabra_B[0]));//guardo en palabra_B
    
    //strcmp compara cadenas caracter a caracter
    //OJO!!! Pepito y pepito NO SON IGUALES!!!
    //strcmp(arregloDeChar1,arregloDeChar2);
    //strcmp devuelve 0 si son IGUALES
    //distinto de 0 si no lo son
    if(strcmp(palabra_A, palabra_B) == 0){
        printf("\nLa palabra %s y %s son iguales!!!", palabra_A, palabra_B);
    }else{
        printf("\nLa palabra %s y %s NO son iguales!!!", palabra_A, palabra_B);
    }
    
    
    return 0;
}
