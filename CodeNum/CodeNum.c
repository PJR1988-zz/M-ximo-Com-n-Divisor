#include </home/pablo/Dropbox/Programas/Programacion1617/ensayos/Proyectos Completados/CodeNum/CodeNum/ejecucion.h>
#include </home/pablo/Dropbox/Programas/Programacion1617/ensayos/Proyectos Completados/CodeNum/CodeNum/byebye.h>
#include </home/pablo/Dropbox/Programas/Programacion1617/ensayos/Proyectos Completados/CodeNum/CodeNum/hola.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

	int b;

	hola();

	printf("\x1B[0m \nEste programa pasa cualquier numero mayor que cero en cualquier base a bases decimal y a otra base indicada por el usuario.");
	printf("\nIndique en que base esta el numero, introduzca cero para salir: ");
	scanf("%d", &b);

	ejecucion(b);

	adios();

	return 0;

}
