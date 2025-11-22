#include<stdio.h>
enum weeks {
    monday,
    tuesday,
    wednesday,
    thrusday,
    friday,
    saturday,
    sunday
};
int main (){
  enum  weeks today = sunday;
  printf("%d", today);
}
