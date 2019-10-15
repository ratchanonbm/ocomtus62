#include <stdio.h>

int main() {
    int a,b,sum;
    a = b = 15;
    sum = a + b;
    printf("Sum 1 = %d\n",sum);
    sum = a++ +b;
    printf("Sum 2 = %d\n",sum);
    sum = ++a +b;
    printf("Sum 3 = %d\n",sum);
}
