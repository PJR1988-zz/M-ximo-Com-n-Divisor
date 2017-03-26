#include </home/pablo/Dropbox/Programas/Programacion1617/ensayos/Proyectos Completados/CodeNum/CodeNum/decimalizacion.h>
#include </home/pablo/Dropbox/Programas/Programacion1617/ensayos/Proyectos Completados/CodeNum/CodeNum/cambiobase.h>
#include </home/pablo/Dropbox/Programas/Programacion1617/ensayos/Proyectos Completados/CodeNum/CodeNum/resultados.h>
#include <stdio.h>
#include <stdlib.h>

void ejecucion(int b){

	int n, b2, dec;
	unsigned long bin;
	unsigned dech; /*para evitar un warning al escanear el hexadecimal*/

	while(b){

		if(b==16){

			printf("\nIntroduzca el numero hexadecimal a codificar: ");
			scanf("%x", &dech);

			printf("\nIndique en que base desea codificarlo: ");
			scanf("%d", &b2);

			dec=dech;

		}

		else{

			printf("\nIntroduzca el numero a codificar: ");
			scanf("%d", &n);

			printf("\nIndique en que base desea codificarlo: ");
			scanf("%d", &b2);

			dec=decimalizacion(n,b);

		}

		if(b2>1){

			if(b2==16){

				bin=dec;
				resultados(n,b,dec,bin,b2);

			}
			else{

				bin=cambiobase(dec,b,b2);
				resultados(n,b,dec,bin,b2);

			}

		}

		else{ printf("\nLa base a debe ser mayor de uno");}

		printf("\033[0m \n\nSi desea obtener la codificacion de otro numero escriba la base en la que esta, en caso contrario introduzca cero: ");
		scanf("%d", &b);

		printf("\n\n");

	}

}
