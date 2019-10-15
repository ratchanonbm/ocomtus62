#include <stdio.h>

int main() {
    float c,f;

    printf("Enter degree in Farenhite : ");
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("Degree %.1f equal %.1f",f,c);

}
