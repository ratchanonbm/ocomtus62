#include <stdio.h>

int main() {
    float x,y;
    printf("Enter number : ");
    scanf("%f",&x);
    y = (2*x*x*x) - (4*x*x) + 6;

    printf("Value = %.2f edit to %.2f ",x,y);
}
