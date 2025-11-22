#include<stdio.h>
enum operation{
    add=1,
    sub,
    mult,
    div
};
int main(){
enum operation op;
printf("Enter operation (1-4): ");
 scanf("%d",&op);
}
