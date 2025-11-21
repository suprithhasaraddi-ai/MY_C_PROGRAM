include<stdio.h>
int swap( int bala1,int bala2){
    int temp=bala1;
    bala1=bala2;
    bala2=temp;
    printf("%d%d",bala1,bala2);
}
int main(){
    int bala3,bala4;
    printf("Enter the value of balances: ");
    scanf("%d%d",&bala3,&bala4);
   swap(bala3,bala4);
}
