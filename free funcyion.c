#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
int *ptr = (int*) malloc(5* sizeof(int));
if(ptr==null){
printf("memory not allocated!\n");}
*ptr=5
printf("before free: value=%d\n",*ptr);
free(ptr);
printf("memory freed successfully!\n");
}
