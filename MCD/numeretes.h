#include <stdio.h>
#include <stdlib.h>

int numeretes(int *p,int j){

	int i=0, m=0;

	printf("\ndame el 1º numero: ");
	scanf("%d", p);

	m=*p;

	for(i=1;i<j;i++){

		printf("\ndame el %dº numero: ", (i+1));
		scanf("%d", (p+i));
		
		if(*(p+i)<m){ m=*(p+i);}

	}

	return m;

}
