#include <stdio.h>

int main() {
    float a=1,b=2,c=3,d=4,e=5,f=6,sum;
    sum = (float) (a + b )*c/d;
    printf("Sum = %.2Lf",sum);

    sum = (float) a + b*c/d;
    printf("Sum = %.2Lf",sum);

    sum = (float) a + (b/c*d + e - f);
    printf("Sum = %.2Lf",sum);

    sum = (float) a*d-c/e%2 + 4;
    printf("Sum = %.2Lf",sum);
}
