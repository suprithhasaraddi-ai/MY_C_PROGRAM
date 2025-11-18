#include <stdio.h>

int main() {
  int a;
    printf("enter a value\n");
    scanf("%d",&a);
    if (a%3==0){
        printf("%d is divisble by 3 \n",a);
        
    }
    else if(a%5==0){
        
        printf("%d is divisble by 3 and 5\n'",a);
    } 
    else{
        printf("given number is not divisble by 3 and 5");
    }
    
}
