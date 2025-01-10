#include <stdio.h>
#include <string.h>

/*
Ejercicio Propuesto
Objetivo:
Crear un programa en C para gestionar una biblioteca de libros.
El programa debe permitir al usuario cargar los datos de varios libros,
mostrar los datos de los libros almacenados, y buscar libros por su g�nero.
*/

#define MAX_LIBROS 2

struct Libro {
    char titulo[50];
    char autor[50];
    char genero[20];
    int anio_publicacion;
};

void cargarLibros(struct Libro libros[], int cantidad);
void mostrarLibros(struct Libro libros[], int cantidad);
void buscarPorGenero(struct Libro libros[], int cantidad,  char genero[]);
void menu(struct Libro Libros[], int cantidad);


int main() {
    struct Libro biblioteca[MAX_LIBROS];
    cargarLibros(biblioteca, MAX_LIBROS);
    menu(biblioteca, MAX_LIBROS);


    return 0;
}

void cargarLibros(struct Libro libros[], int cantidad) {
    printf("CARGA DE LIBROS\n");
    for (int i = 0; i < cantidad; i++) {
        printf("\nIngrese los datos del libro %d:\n", i + 1);

        printf("T�tulo: ");
        scanf(" %[^\n]s", libros[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]s", libros[i].autor);

        printf("G�nero: ");
        scanf(" %[^\n]s", libros[i].genero);

        printf("A�o de publicaci�n: ");
        scanf("%d", &libros[i].anio_publicacion);
    }
}

void mostrarLibros(struct Libro libros[], int cantidad) {
    printf("\nLISTADO DE LIBROS\n");
    for (int i = 0; i < cantidad; i++) {
        printf("\nLibro %d:\n", i + 1);
        printf("T�tulo: %s\n", libros[i].titulo);
        printf("Autor: %s\n", libros[i].autor);
        printf("G�nero: %s\n", libros[i].genero);
        printf("A�o de publicaci�n: %d\n", libros[i].anio_publicacion);
    }
}

void buscarPorGenero(struct Libro libros[], int cantidad, char genero[]) {
    int encontrados;

    printf("\nB�SQUEDA POR G�NERO: %s\n", genero);

    for (int i = 0; i < cantidad; i++) {
        if (strcmp(libros[i].genero, genero) == 0) {
            encontrados++;
            printf("\nLibro encontrado:\n");
            printf("T�tulo: %s\n", libros[i].titulo);
            printf("Autor: %s\n", libros[i].autor);
            printf("A�o de publicaci�n: %d\n", libros[i].anio_publicacion);
            encontrados++;
        }
    }
    if (!encontrados)
        {
        printf("No se encontraron libros del g�nero %s\n", genero);
        }
}


void menu(struct Libro Libros[], int cantidad)
{

        int opcion;
    do {
        printf("\nMENU PRINCIPAL\n");
        printf("1. Mostrar todos los libros\n");
        printf("2. Buscar libros por g�nero\n");
        printf("3. Salir\n");
        printf("Elija una opci�n: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarLibros(Libros, MAX_LIBROS);
                break;
            case 2:
                {
                    char genero_buscar[20];
                    printf("Ingrese el g�nero a buscar: ");
                    scanf("%s", genero_buscar);
                    buscarPorGenero(Libros, MAX_LIBROS, genero_buscar);
                }
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opci�n incorrecta. Intente de nuevo.\n");
        }
    } while (opcion != 3);



}
