#include <stdio.h>
int checkPass(int m1, int m2, int m3) {
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        return 1; 
        else 
        return 0;
}
int main() {
    int s1, s2, s3;
    float avg;
    printf("Enter marks of three subjects: \n");
    scanf("%d %d %d", &s1, &s2, &s3);
    avg = (s1 + s2 + s3) / 3.0;
    printf("Average = %.2f\n", avg);
    if (checkPass(s1, s2, s3))
        printf(" PASS\n");
    else
        printf(" FAIL\n");
}
