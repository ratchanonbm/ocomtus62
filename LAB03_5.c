#include <stdio.h>

int main() {
    float r,c,a,pi = 22/7;

    printf("Enter circle radius : ");
    scanf("%f",&r);

    a = pi*r*r;
    c = 2*pi*r;

    printf("Area of circle = %.2f\n",a);
    printf("Ciscumference of circle = %.2f",c);

}
