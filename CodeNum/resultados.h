#include <stdio.h>
#include <stdlib.h>

void resultados(int n, int b, int dec, long double bin, int b2){

	int cifras=0, ceros=1, b3;
	b3=b2;

	while(b3){ ceros=ceros*10; cifras++; b3=b3/10;} /*El apaño de esta linea y la siguiente es para que con bases que sean potencias de 10 no me de una cifra de más*/

	ceros=ceros/10;

	if(b2/ceros==1 && b2%ceros==0){ cifras=cifras-1;}

	if(bin==0){printf("\033[31m \nLas cifras del numero han de ser menores que la base en la que esta expresado");}

	else{

		if(b==16){

			if(b2==16){

				printf("\033[31m El numero %x en base %d, cuyo valor en base 10 es %d, se expresa %X en base %d.",dec, b, dec, dec, b2);

				printf("\033[31m \nEn esta base %d cada cifra agrupa 1 digitos.", b2);

			}

			else{

				printf("\033[31mEl numero %x en base %d, cuyo valor en base 10 es %d, se expresa %.0Lf en base %d.",dec, b, dec, bin, b2);
				printf("\033[31m \nEn esta base %d cada cifra agrupa %d digitos.", b2, cifras);

			}

		}

		else{

			if(b2==16){

				printf("\033[31m \n\nEl numero %d en base %d, cuyo valor en base 10 es %d, se expresa %X en base %d.", n, b, dec, dec, b2);

				printf("\033[31m \nEn esta base %d cada cifra agrupa 1 digitos.", b2);

			}
			else{

				printf("\033[31m \n\nEl numero %d en base %d, cuyo valor en base 10 es %d, se expresa %.0Lf en base %d.", n, b, dec, bin, b2);

				printf("\033[31m \nEn esta base %d cada cifra agrupa %d digitos.", b2, cifras);

			}

		}

	}

}
