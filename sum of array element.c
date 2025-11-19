#include<stdio.h>
int main(){
    int paper[5];
    int sum =0;
    printf("enter the element\n");
    for (int i=0;i<5;i++){
        scanf ("enter num:%d",&paper[i]);
        sum+=paper[i];
    }
    ("%d",sum);
}
