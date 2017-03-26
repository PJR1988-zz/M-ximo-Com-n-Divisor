/*Funcion que factoriza en factores primos*/
#include <stdio.h>
#include <stdlib.h>
#include </opt/MCD/primo.h>
#include </opt/MCD/divisor.h>

int descomposicion(int m, int *p, int j){

	int i=2, mcd=1, k;

	while (m){

			if(primo(i)==1){

				if(divisor(p,j,i)){

					mcd=mcd*i;

					for(k=0;k<j;k++){ *(p+k)=*(p+k)/i;}

					m=m/i;

					if(m==1) m=0;

				}

				else{i++;}

			}

			else{i++;}

			if(i>m){m=0;}

	}

	return mcd;

}
