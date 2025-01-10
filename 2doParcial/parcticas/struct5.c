#include <stdio.h>
#include <string.h>

#define MAX_PERSONAS 100

struct FechaNacimiento {
    int dia;
    int mes;
    int anio;
};

struct Persona {
    char nombreCompleto[100];
    char sexo;
    struct FechaNacimiento fechaNacimiento;
};

void cargarPersonas(struct Persona personas[], int *numPersonas);
void consultarPorAnio(struct Persona personas[], int numPersonas, int anio);
void consultarPorSexo(struct Persona personas[], int numPersonas, char sexo);
void mostrarMenu();

int main() {
    struct Persona personas[MAX_PERSONAS];
    int numPersonas = 0;
    int opcion;
    int anio;
    char sexo;

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                cargarPersonas(personas, &numPersonas);
                break;
            case 2:
                printf("Ingrese el año de nacimiento a consultar: ");
                scanf("%d", &anio);
                consultarPorAnio(personas, numPersonas, anio);
                break;
            case 3:
                printf("Ingrese el sexo a consultar (M/F): ");
                scanf(" %c", &sexo);  // Espacio antes de %c para consumir cualquier espacio en el buffer
                consultarPorSexo(personas, numPersonas, sexo);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción incorrecta, por favor intente nuevamente.\n");
        }
    } while (opcion != 4);

    return 0;
}

void cargarPersonas(struct Persona personas[], int *numPersonas) {
    if (*numPersonas >= MAX_PERSONAS) {
        printf("Se ha alcanzado el máximo de personas.\n");
        return;
    }

    struct Persona nuevaPersona;

    printf("Ingrese el nombre completo: ");
    getchar();  // Limpiar el buffer
    fgets(nuevaPersona.nombreCompleto, 100, stdin);
    nuevaPersona.nombreCompleto[strcspn(nuevaPersona.nombreCompleto, "\n")] = '\0'; // Eliminar el salto de línea

    printf("Ingrese el sexo (M/F): ");
    scanf(" %c", &nuevaPersona.sexo);

    printf("Ingrese la fecha de nacimiento (dia mes año): ");
    scanf("%d %d %d", &nuevaPersona.fechaNacimiento.dia, &nuevaPersona.fechaNacimiento.mes, &nuevaPersona.fechaNacimiento.anio);

    personas[*numPersonas] = nuevaPersona;
    (*numPersonas)++;

    printf("Persona agregada exitosamente.\n");
}

void consultarPorAnio(struct Persona personas[], int numPersonas, int anio) {
    printf("Personas nacidas en el año %d:\n", anio);
    for (int i = 0; i < numPersonas; i++) {
        if (personas[i].fechaNacimiento.anio == anio) {
            printf("%s, Sexo: %c, Fecha de nacimiento: %02d/%02d/%d\n",
                   personas[i].nombreCompleto, personas[i].sexo,
                   personas[i].fechaNacimiento.dia, personas[i].fechaNacimiento.mes,
                   personas[i].fechaNacimiento.anio);
        }
    }
}

void consultarPorSexo(struct Persona personas[], int numPersonas, char sexo) {
    printf("Personas de sexo %c:\n", sexo);
    for (int i = 0; i < numPersonas; i++) {
        if (personas[i].sexo == sexo) {
            printf("%s, Sexo: %c, Fecha de nacimiento: %02d/%02d/%d\n",
                   personas[i].nombreCompleto, personas[i].sexo,
                   personas[i].fechaNacimiento.dia, personas[i].fechaNacimiento.mes,
                   personas[i].fechaNacimiento.anio);
        }
    }
}

void mostrarMenu() {
    printf("\nMENU PRINCIPAL\n");
    printf("1. Cargar personas\n");
    printf("2. Consultar por año de nacimiento\n");
    printf("3. Consultar por sexo\n");
    printf("4. Salir\n");
    printf("Ingrese una opción: ");
}
