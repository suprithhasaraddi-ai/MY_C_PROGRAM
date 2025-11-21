#include <stdio.h>
#include<stdlib.h>
int main() {
int *ptr = (int*) malloc(5* sizeof(int));
*ptr = 10;
printf("value = %p\n",*ptr);
free(ptr);
}
