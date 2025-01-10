/*Realizar un sistema de votación electrónica, donde existan 3 candidatos (cuyos datos son cargados inicialmente).
Para cada candidato, debemos guardar: Nombre, apellido, Partido Político y cantidad de votos.
El sistema deberá iniciar mostrando un menú con los datos de los tres candidatos (sin los votos),
como para que el votante seleccione uno de ellos y sea contabilizado.
El menú deberá tener una cuarta opción para voto en blanco y otra como para cerrar la votación,
esta última pedirá un clave cargada por defecto en el sistema, si se ingresa mal la clave,
deberá volver al menú, si es correcta, deberá informar la cantidad de votantes total,
los votos obtenidos por cada candidatos y los votos en blanco, para finalmente cerrar
el escrutinio y finalizar la aplicación.
*/

struct candidatos
{
char nombre[20];
char apellido[20];
char partido[50];
int votos;
};

#include<stdio.h>
#define MAX_CAND 3
#define MAX_OPTIONS 5
#define MAX_VOTOS 3

void mostrar_candidatos(struct candidatos c[], int tam);
void menu (struct candidatos c[], int tam);


int main()
{
    struct candidatos c[MAX_CAND]={{"javier", "milei", "La libertad avanza", 0},
                                    {"juanD", "Peron", "somos todos trolos", 0},
                                    {"alberto", "fdz", "pobreza", 0}};


    mostrar_candidatos(c, MAX_CAND);
    menu(c, MAX_OPTIONS);

    return 0;
}

void menu(struct candidatos c[], int tam)
{
    int opcion;
    int votos_en_blanco = 0;
    char clave[20];
    char clave_correcta[] = "clave123"; // La clave por defecto


    do
    {
        printf("\nMENU PRINCIPAL, ELIJA SU VOTACION CON UN NUMERO\n");
        printf("\n1-LA LIBERTAD AVANZA\n");
        printf("\n2-SOMOS TODOS TROLOS\n");
        printf("\n3-POBREZA\n");
        printf("\n4-Voto en blanco\n");
        printf("\n5-CERRAR VOTACIONES\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            c[0].votos++; // Aumentar votos para La Libertad Avanza
            printf("\n(Haz votado La libertad avanza del candidato javier Milei)\n");
            break;

        case 2:
            c[1].votos++; // Aumentar votos para Somos Todos Trolos
            printf("\n(Haz votado somos todos trolos del candidato JuanD. Peron)\n");
            break;

        case 3:
            c[2].votos++; // Aumentar votos para Pobreza
            printf("\n(Haz votado pobreza del candidato Alberto FDZ)\n");
            break;

        case 4:
            votos_en_blanco++; // Aumentar votos en blanco
            printf("\n(Haz votado en blanco)\n");
            break;

        case 5:

            printf("\nIntroduce la clave para cerrar las votaciones: ");
            scanf("%s", clave);
            if (strcmp(clave, clave_correcta) == 0)
            {
                printf("\nCerrando votaciones...\n");
                printf("\nResultados finales:\n");

                for (int i = 0; i < MAX_CAND; i++)
                {
                printf("\nVotos para %s: %d\n", c[i].partido, c[i].votos);
                }
                printf("\nVotos en blanco: %d\n", votos_en_blanco);
            }
            else
            {
                printf("\nClave incorrecta. Volviendo al menú principal.\n");
                opcion = 0; // Para continuar el bucle
            }
            break;

        default:
            printf("\nOpción incorrecta BURRO!!!\n");
        }

    } while (opcion != 5);
}


void mostrar_candidatos(struct candidatos c[], int tam)
{

    for (int i = 0; i< MAX_CAND; i++){

        printf("\n%s, %s, %s, %d\n", c[i].nombre, c[i].apellido, c[i].partido, c[i].votos);

    }


}

