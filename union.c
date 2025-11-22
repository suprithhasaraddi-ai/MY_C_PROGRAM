#include<stdio.h>
union seenu {
    int i;
    float f;
};
int main() {
    union seenu seenu;
    seenu.i = 10;
    printf("seenu.i = %d\n",seenu.i);
    seenu.f = 23.4;
    printf("seenu.f = %.2f\n",seenu.f);
    printf("seenu.i after writing to f = %d\n",seenu.i);
}
