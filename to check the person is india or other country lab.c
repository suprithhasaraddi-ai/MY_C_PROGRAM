#include <stdio.h>
int main() {
    int adhaar=1234567890;
    int pan=123456;
    int appar=1234567;
    int driving=12345;
    int pp=12345678;
    int kyc;
    printf("enter the number");
    scanf("%d",&kyc);
    if (adhaar==kyc){
        printf("adhaar is verified");
    }
    else if (pan==kyc){
        printf("pan card is verified");
    }
    else if (appar==kyc){
        printf("appar id is verified");
    }
    else if (driving==kyc){
        printf("driving licence is verified");
    }
    else if (pp==kyc){
        printf("pass port is verified");
    }
    else  {
        printf("out of country");
    }
}
