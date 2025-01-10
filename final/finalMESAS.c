#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_MESAS 20

typedef struct {
    int numeroMesa;
    char nombreCompleto[51];
    int cantidadPersonas;
    int codigoReserva;
} Reserva;

void inicializarMesas(int mesas[], int tam);
void mostrarMesasLibres(int mesas[], int tam);
int reservarMesa(Reserva reservas[], int mesas[], int *cantidadReservas, int tam);
void mostrarReserva(Reserva reservas[], int cantidadReservas, int codigo);
void menuPrincipal(Reserva reservas[], int mesas[], int *cantidadReservas, int tam);
int generarCodigoReserva();

int main() {
    int mesas[MAX_MESAS];
    Reserva reservas[MAX_MESAS];
    int cantidadReservas = 0;
    inicializarMesas(mesas, MAX_MESAS);
    menuPrincipal(reservas, mesas, &cantidadReservas, MAX_MESAS);
    return 0;
}

void inicializarMesas(int mesas[], int tam) {
    for (int i = 0; i < tam; i++) {
        mesas[i] = 0; // 0 indica que la mesa está libre
    }
}

void mostrarMesasLibres(int mesas[], int tam) {
    int libres = 0;
    printf("\nMesas libres:\n");
    for (int i = 0; i < tam; i++) {
        if (mesas[i] == 0) {
            printf("Mesa %d\n", i + 1);
            libres++;
        }
    }
    printf("Porcentaje de ocupación: %.2f%%\n", ((float)(tam - libres) / tam) * 100);
}

int reservarMesa(Reserva reservas[], int mesas[], int *cantidadReservas, int tam) {
    int numeroMesa;
    Reserva nuevaReserva;

    printf("\nIngrese el número de mesa a reservar (1-%d): ", tam);
    scanf("%d", &numeroMesa);

    if (numeroMesa < 1 || numeroMesa > tam || mesas[numeroMesa - 1] != 0) {
        printf("Número de mesa inválido o ya está reservada.\n");
        return 0;
    }

    printf("Ingrese el nombre completo: ");
    getchar(); // Limpiar el buffer
    fgets(nuevaReserva.nombreCompleto, 51, stdin);
    nuevaReserva.nombreCompleto[strcspn(nuevaReserva.nombreCompleto, "\n")] = 0; // Eliminar el salto de línea

    printf("Ingrese la cantidad de personas (máximo 6): ");
    scanf("%d", &nuevaReserva.cantidadPersonas);

    if (nuevaReserva.cantidadPersonas < 1 || nuevaReserva.cantidadPersonas > 6) {
        printf("Cantidad de personas inválida.\n");
        return 0;
    }

    nuevaReserva.numeroMesa = numeroMesa;
    nuevaReserva.codigoReserva = generarCodigoReserva();
    reservas[*cantidadReservas] = nuevaReserva;
    (*cantidadReservas)++;
    mesas[numeroMesa - 1] = 1; // Marcar la mesa como reservada

    printf("Mesa reservada con éxito. Código de reserva: %d\n", nuevaReserva.codigoReserva);
    return 1;
}

void mostrarReserva(Reserva reservas[], int cantidadReservas, int codigo) {
    for (int i = 0; i < cantidadReservas; i++) {
        if (reservas[i].codigoReserva == codigo) {
            printf("\nReserva encontrada:\n");
            printf("Número de mesa: %d\n", reservas[i].numeroMesa);
            printf("Nombre completo: %s\n", reservas[i].nombreCompleto);
            printf("Cantidad de personas: %d\n", reservas[i].cantidadPersonas);
            return;
        }
    }
    printf("Reserva no encontrada.\n");
}

void menuPrincipal(Reserva reservas[], int mesas[], int *cantidadReservas, int tam) {
    int opcion;
    do {
        printf("\nMENU PRINCIPAL - Elige tu opción\n");
        printf("1 - Mostrar mesas libres\n");
        printf("2 - Reservar mesa\n");
        printf("3 - Buscar reserva por código\n");
        printf("4 - Salir\n");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarMesasLibres(mesas, tam);
                break;
            case 2:
                reservarMesa(reservas, mesas, cantidadReservas, tam);
                break;
            case 3:
                {
                    int codigo;
                    printf("Ingrese el código de reserva: ");
                    scanf("%d", &codigo);
                    mostrarReserva(reservas, *cantidadReservas, codigo);
                }
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción incorrecta.\n");
                break;
        }
    } while (opcion != 4);
}

int generarCodigoReserva() {
    static int codigo = 0;
    return ++codigo;
}
