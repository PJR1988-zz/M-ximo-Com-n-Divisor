#include <stdio.h>
#include <stdlib.h>

int divisor(int *p, int j, int i){

	int k, control=0;

	for(k=0; k<j; k++){

		if(*(p+k)%i==0){control=control;}

		else{control++;}

	}

	if(control==0){ return i;}

	else{ return 0;}

}
