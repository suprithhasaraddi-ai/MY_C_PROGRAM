#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("Enter a name");
    scanf("%s",&name);
    strcat(name,"sp");
    printf("%s",name);
}
