#include<stdio.h>

/*Un programa venderá marcadores en 3 colores posibles, cerrará el programa cuando se quede sin stock de alguno de los colores.*/

int main() {
    int marcadores;
    int rojo = 3;
    int azul = 3;
    int verde = 3;

    printf("Vendemos marcadores. Elige el color por número: 1 rojo (3 en stock), 2 azul (3 en stock), 3 verde (3 en stock)\n");

    while (rojo != 0 || azul != 0 || verde != 0) {
        scanf("%d", &marcadores);

        if (marcadores == 1 && rojo > 0) {

            printf("Vendiste un marcador rojo. Quedan %d en stock\n", --rojo);

        } else if (marcadores == 2 && azul > 0) {
            printf("Vendiste un marcador azul. Quedan %d en stock\n", --azul);

        } else if (marcadores == 3 && verde > 0) {
            printf("Vendiste un marcador verde. Quedan %d en stock\n", --verde);

        } else {
            printf("No hay suficiente stock o ingresaste un valor incorrecto\n");

        }

        if (rojo == 0 || azul == 0 || verde == 0) {
            printf("Se acabó el stock de uno de los colores. Cerrando programa.\n");
            break;
        }
    }

    return 0;
}
