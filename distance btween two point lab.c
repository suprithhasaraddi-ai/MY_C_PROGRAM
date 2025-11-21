#include<stdio.h>
#include<math.h>
int main ()
{
    int x1,y1,x2,y2,distance;
    printf("enter the x1 and y1\n");
    scanf("%f %f",&x1,&y1);
    printf("enter the x2 and y2\n");
    scanf("%f %f",&x2,&y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("the distance btween two point:%f\n",distance);
}
