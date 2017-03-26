#include <stdio.h>
#include <stdlib.h>

long double cambiobase(int n, int b, int b2){

	int cont, cont2, control;
	unsigned long x;

	cont=1;
	cont2=1;
	x=0;
	control=b2;

	if(b2>0){

		while(control){control=control/10; cont2=cont2*10;}

		if(b2==cont2/10){ cont2=cont2/10;} /*El apaño de esta linea es para que con bases que sean potencias de 10 no me de una cifra de más*/

		while(n){

			x= x+(n%b2)*cont;
			cont=cont*cont2;
			n=n/b2;
			printf("x: %ld\n", x);

		}

		return x;

	}

	else{ return 0;}

}
