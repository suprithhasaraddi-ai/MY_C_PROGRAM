#include<stdio.h>
int main()
{
    int num=777,org,rev=0,rem;
    org=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(org==rev){
        printf("num is pal");
    }
    else{
        printf("not pal");
}
