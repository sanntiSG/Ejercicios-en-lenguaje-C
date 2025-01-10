#include<stdio.h>
#define TAM 2

struct datos
{
    char nombre[20];
    char apellido[20];
    char bono_por_medalla[15];
    float sueldo;
};

void menu(struct datos a[], int tam);
void cargar_datos(struct datos a[], int tam);
void mostrar_datos(struct datos a[], int tam);
void calcular_sueldo(struct datos a[], int tam);
int main()
{
    struct datos atletas [TAM];
    cargar_datos(atletas, TAM);
    menu(atletas, TAM);

return 0;
}

void cargar_datos(struct datos a[],int tam)
{
    for (int i = 0; i<tam; i++)
    {
        printf("ingrese el nombre del atleta %d\n", i+1);
        scanf("%s", a[i].nombre);
        printf("ingrese el apellido del atleta %d\n", i+1);
        scanf("%s", a[i].apellido);
        printf("ingrese el bono por medalla del atleta %d. oro. plata. bronce.\n", i+1);
        scanf("%s", a[i].bono_por_medalla);
        printf("ingrese el sueldo del atleta %d\n", i+1);
        scanf("%f", &a[i].sueldo);
    }
}

void mostrar_datos(struct datos a[], int tam)
{

    for (int i=0; i<tam; i++)
    {
        printf("\napellido: %s\n", a[i].apellido);
        printf("\nnombre: %s\n", a[i].nombre);
        printf("\nbono por medalla: %s\n", a[i].bono_por_medalla);
        printf("\nsueldo: %f\n", a[i].sueldo);
    }
}

void menu(struct datos a[], int tam)
{

    int opcion;
    do{
            printf("\nmenu, escoge una opcion\n");
            printf("\n1-mostrar datos de atletas\n");
            printf("\n2-calcular sueldo segun bono\n");
            printf("\n3-salir!!\n");
            scanf("\n%d", &opcion);

        switch(opcion){

            case 1: mostrar_datos(a, tam);break;
            case 2: calcular_sueldo(a, tam); break;
            case 3: printf("saliendo\n");break;
            default: printf("opcion incorrecta\n");
        }
    }while(opcion!=3);

}

void calcular_sueldo(struct datos a[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        float sueldo_final = a[i].sueldo;

        if (strcmp(a[i].bono_por_medalla, "bronce") == 0 || strcmp(a[i].bono_por_medalla, "BRONCE") == 0)
        {
            sueldo_final = sueldo_final + 500000;

        }
        else if (strcmp(a[i].bono_por_medalla, "plata") == 0 || strcmp(a[i].bono_por_medalla, "PLATA") == 0)
        {
            sueldo_final += 800000;
        }
        else if (strcmp(a[i].bono_por_medalla, "oro") == 0 || strcmp(a[i].bono_por_medalla, "ORO") == 0)
        {
            sueldo_final += 1200000;
        }

        printf("El sueldo de %s %s con bono es: %.2f\n", a[i].nombre, a[i].apellido, sueldo_final);
    }
}
