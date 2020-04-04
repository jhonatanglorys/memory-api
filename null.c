#include <stdio.h>


int main(){
    int a;
    int *p = &a;
    p = NULL;
    *p = 5;
    return 0;
}