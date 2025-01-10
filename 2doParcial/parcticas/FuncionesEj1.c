/*Realizar un menú con 3 opciones(la impresión de las opciones del menú y la rutina de ejecución
de cada opción debe estar realizada por funciones independientes.):
Presione 0 para salir.
Finaliza el programa.
Presione 1 para para mostrar el autor del programa.
Mostrar tu nombre y apellido.
Presione 2 para convertir a minuscula.
Se le pide un nombre al usuario, se verifican que sean letras, y se las pasa a minúscula.
*/

#include<stdio.h>

//implemento funcion

void menu();
void mostrar_autor_del_programa();
void convertirAMinusculas();

int main()
{

    menu();


    return 0;
}


    void menu()
    {
        int opciones;
        do{
        printf("\nMenu principal:\n");
        printf("\n1Mostrar autor del programa\n");
        printf("\n2Convertir tu texto de MAYUSCULA a minuscula\n");
        printf("\n3SALIR\n");
        scanf("%d", &opciones);

            switch(opciones)
            {
                case 1: mostrar_autor_del_programa();break;
                case 2: convertirAMinusculas();break;
                case 3: printf("\nchau\n"); break;
                default: printf("\nOpcion INCORRECTA!!!\n");

            }


        }while(opciones!=3);
    }

    void mostrar_autor_del_programa()
    {
        printf("Mi nombre es: Santiago Sosa\n");

    }
void convertirAMinusculas() {
    char palabra[20];
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    int i = 0;
    while (palabra[i]) {
        if (palabra[i] >= 'A' && palabra[i] <= 'Z') {
            palabra[i] = palabra[i] + ('a' - 'A');
        }
        i++;
    }
     printf("Palabra convertida: %s\n", palabra);
}


