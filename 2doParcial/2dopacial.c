#include<stdio.h>


/*Con el objetivo de evaluar la ocupación temporal de un
cajero automático se ingresan los
datos correspondientes a una jornada de 24 hs. Se sabe que
durante la jornada la máxima
cantidad de personas que pueden utilizarlo es 288. Se debe tener en cuenta la siguiente
información:
a) Persona nombre (15 caracteres), sexo codificado como F, M, X (otros). Cantidad de
tiempo utilizado (max. 40 min), cantidad de operaciones (max.10), el lote termina
con el ingreso de una cantidad de operaciones menor a 0.
b) Luego del ingreso de datos se pide el ingreso a un menú repetitivo que permita la
elección de diferentes opciones:
I: Listado de las personas de sexo M que usaron el cajero.
II: Listado de personas que tardaron entre 1 y 5 minutos.
III: Número de personas de cada sexo (incluyendo la opción X, otros).
IV: Promedio de tiempo de todos los individuos de sexo F.
V: Nombre y tiempo de la persona que más demoro y la que menos demoro.
VI: Salir
c) En todos los casos se pide informar con los textos adecuados por consola*/

#define MAX_N       16
#define MAX_DATOS  288
#define TAM          7


struct Persona{
	char   nombre[MAX_N];   //para el nombre
	char   sexo;         //para el sexo
	short  tiempo;       //para el tiempo
	short  operaciones;  //para las operaciones
};

void personas_por_sexo(struct Persona mis_personas[], int tam);
void listado_uno_cinco(struct Persona mis_personas[], int tam);
void menu(struct Persona mis_personas[], int tam);


int main(void){


	struct Persona las_personas[MAX_DATOS] = {{"Juan", 'M', 19, 6},
										      {"Claudia", 'F', 26, 8},
										      {"Marcela", 'F', 35, 10},
										      {"ALF", 'X', 5, 2},
										      {"Chewbacca", 'X', 2, 5},
										      {"Lisandro", 'M', 25, 7},
										      {"Selma", 'F', 4, 1}};


	//int contador = carga(las_personas);
	menu(las_personas, TAM); //invoco la funcion

	return 0;
}


void menu(struct Persona mis_personas[], int tam){

	int opcion;

	do{
		printf("\n\nMENU\n");
		printf("\n1-Listados de Ms");
		printf("\n2-Listados entre 1 y 5 min");
		printf("\n3-Cantidad por sexo");
		printf("\n4-Promedio tiempo Fs");
		printf("\n5-Max y min de tiempos");
		printf("\n6-SALIR");
		printf("\nSu opcion?:");

		scanf("%d", &opcion);


		switch(opcion){
		case 1 : printf("HACER OPCION 1");break;
		case 2 : listado_uno_cinco(mis_personas, tam);break;
		case 3 : personas_por_sexo(mis_personas, tam);break;
		case 4 : printf("HACER OPCION 4");break;
		case 5 : printf("HACER OPCION 5");break;
		case 6 : printf("FINALIZANDO......");break;
		default: printf("OPCION INVALIDA!!!");
		}

	} while(opcion != 6);


}


void listado_uno_cinco(struct Persona mis_personas[], int tam){


	for(int i = 0; i < tam; i++){

		if(mis_personas[i].tiempo >= 1 &&
		   mis_personas[i].tiempo <= 5){

			printf("%16s  %c  %hd  %hd\n", mis_personas[i].nombre,
										   mis_personas[i].sexo,
				                           mis_personas[i].tiempo,
										   mis_personas[i].operaciones);
		}
	}

}


void personas_por_sexo(struct Persona mis_personas[], int tam){

	int contF = 0;
	int contM = 0;
	int contX = 0;


	for(int i = 0; i < tam; i++){

		if(mis_personas[i]. sexo == 'F'){
			contF++;
		}else if(mis_personas[i]. sexo == 'M'){
			contM++;
		}else{
			contX++;
		}
	}

	printf("\nFemeninos %d   Masculinos %d  X %d", contF, contM, contX);
}
