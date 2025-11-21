#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks: ");
    scanf("%d", &marks);
    if (marks>=90){
        printf("the student is grade a");
    }
    else if (marks>=75){
        printf("the student is grade b");
    }
    else if (marks>=60){
        printf("the student is grade c");
    }
    else if (marks>=50){
        printf("the student is grade  d");
    }
    else if (marks<=49){
        printf("the student is fail");
    }
}
