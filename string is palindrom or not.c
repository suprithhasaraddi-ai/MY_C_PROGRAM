#include<stdio.h>
#include<string.h>
int main() {
char str[50],rev[50];
int i,lin;
printf("enter a string:  \n");
scanf("%s",str);
lin = strlen(str);
for(i=0;i<lin;i++){
    rev[i]= str[lin - 1 - i ];
}
rev[lin]='\0';
if (strcmp(str,rev)==0)
printf("it is a palindrome");
else
printf("not a palindrome");
}
