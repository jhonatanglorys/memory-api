#include <stdlib.h>
int main(){
  int *a=(int *)malloc(1024*sizeof(int));
  *a=1;
  return EXIT_SUCCESS;
}
