#include<iostream>
#include<stdio.h>
#include<string.h>
	
	int main (){
	int edad, club, cumplereglas = 0;
	float promedio;
	char nombre [65];
	
	printf("---sistema de admision---\n");
	printf("nombre del estudiante: ");
	scanf("%[^\n]", nombre); // lee nombre con espacios
	printf("edad: ");
	scanf("%d", &edad);
	printf("promedio: ");
	scanf("%f", &promedio);
	printf("¿pertenece al club de programacion? (1=SI, 0=NO): ");
	scanf("%d", &club);
	//evaluacion de reglas
	//regla 1: edad >= 18 y promedio >= 85
	//regla 2: club = 1 y promedio >= 75
	//regla 3: promedio >= 95
	
	if ((edad >= 18 && promedio >= 85) || (club == 1 && promedio >= 75) || (promedio >= 95)) {
		cumplereglas = 1;
	}
	// regla 4: nombre especial
	if(strcmp(nombre, "David Alvarez") == 0){
		printf("\nAcceso especial concedido. \n");
	} else if (cumplereglas) {
		printf("\nAcceso concedido por reglas academicas. \n");
	} else if (" "){
		printf("\nAcceso denegado. \n");
	}
	
	return 0;
}
