#include <stdio.h>
#include <stdlib.h>


#define TAM 10

int main(){
	int *data;
	data=malloc(TAM*sizeof(int));
	for (int i=0; i<TAM;i++){
		*(data+i)=0;
	}
	free(data);
	printf("%d", data[1]);
	return 0;
}
