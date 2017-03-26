#include <stdio.h>
#include <stdlib.h>

int decimalizacion(int dec, int  b){

	int x, cont, cont2, cont3, cont4;
	x=0;
	cont=1;
	cont2=0;
	cont3=1;
	cont4=b;

	if(b==10){ x=dec;}

	else{

		while(dec){

			if(b>10){

				while(cont4){ cont4=cont4/10; cont3=cont3*10;}

				if((dec%(cont3))>=b){

					cont2++;
					dec=dec/(cont3);

				}

				else{

					x= x+((dec%cont3)*cont);
					cont=cont*b;
					dec=dec/cont3;

				}

			}

			else{

				if(dec%10 >= b){

					cont2++;
					dec=dec/10;

				}

				else{

					x=x+(dec%10)*cont;
					cont=cont*b;
					dec=dec/10;

				}

			}

		}
	}

	if (cont2==0){return x;}

	else {return 0;}
}
