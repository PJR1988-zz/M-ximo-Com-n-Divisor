#include </opt/MCD/descomposicion.h>
#include </opt/MCD/numeretes.h>
#include <stdio.h>
#include <stdlib.h>

void ejecucion(){

	int j=1, *p, m, mcd, k, *q, cont=0;

	printf("\nIndique cuantos numeros forman el grupo del que quiere calcular el Maximo Comun Divisor, si desea salir pulse cero: ");
	scanf("%d", &j);

	while(j){

	p=(int *) malloc(j*sizeof(int)); /*En este puntero se almacenarán los numeros de los que queremos sacar el MCD*/
	q=(int *) malloc(sizeof(int));
	cont++; /*Determina si se ha asignado memoria a los punteros*/

	m=numeretes(p,j); /*esta funcion da valor a las componentes del puntero y almacena en m el valor de la componente mas pequeña*/

	for(k=0;k<j;k++){*(q+k)=*(p+k);}

	mcd=descomposicion(m,p,j);

	if(mcd==1){ 

		printf("\nEl unico divisor comun entre los numeros %d", *q);

		for(k=1;k<j;k++){ 

			if (k==(j-1)){ printf(" y %d", *(q+k));}

			else{ printf(", %d", *(q+k));}

		}

		printf(" es el 1, no se pueden reducir entre si.");

	}

	else{

		printf("\nEl maximo comun divisor de los numeros %d", *q);

		for(k=1;k<j;k++){ 

			if (k==(j-1)){ printf(" y %d", *(q+k));}

			else{ printf(", %d", *(q+k));}

		}

		printf(" es %d.", mcd);

	}

	printf("\n\nIndique cuantos numeros forman el grupo del que quiere calcular el Maximo Comun Divisor, si desea salir pulse cero: ");
	scanf("%d", &j);

	}

	if(cont){ /*Si se asigna memoria a los punteros la libera*/

		free(p);
		free(q);

	}

}
