#include <stdio.h>

int main() {
    int a=1,b=2,c=3,d=4,sum;

    sum = a*a + b*b;
    printf("Sum = %d\n",sum);

    sum = a*a*a + b*c/d;
    printf("Sum = %d\n",sum);

    sum = a + b/ ++c *d;
    printf("Sum = %d\n",sum);

    sum = (a % b) + c / d *d;
    printf("Sum = %d",sum);

}
