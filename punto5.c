#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main(){
	int *data;
	data = malloc(TAM*sizeof(int));
	data[100]=0;
	free(data);
	data=NULL;
	return 0;
}
