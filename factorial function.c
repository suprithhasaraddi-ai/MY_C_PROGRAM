#include<stdio.h>
int factorial(){
int n=5,i;
    int fact=1;
    for (int i=1;i<=5;i++){
        fact=fact*i;
    }
    printf("factorial :%d",fact);
}
int main() {
    factorial();
}
