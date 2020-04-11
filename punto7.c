
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
	int *data, *p;
	data = malloc(TAM*sizeof(int));
	for (int i=0; i<TAM; i++){
	*(data+i)=0;
	}
	p=&data[4];
	printf("Antes de liberar %p", p);
	free(data);
	printf("Despues de liberar %p", p);
	return 0;
}
