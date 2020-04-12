#include <stdlib.h>
#include <stdio.h>

#define TAM 10


int main(){
	int *data;
	data = calloc(TAM, TAM*sizeof(int));
	if(data==0){
		printf("Error: put of memory");
		return -1;
	}
	return 0;
}
