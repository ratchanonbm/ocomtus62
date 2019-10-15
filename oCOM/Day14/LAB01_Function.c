#include <stdio.h>
#include <math.h>


int prime(int num){
    int prime = 1;
    scanf("%d",&num);
    if (num==1) prime = 0;
    else if (num==2) prime = 1;
    else if (num!=2&&num%2==0) prime = 0;
    else {
        for(int i=3;i<=sqrt(num);i+=2){
            if(num%i==0) {
                prime = 0;
                break;
            }
        }
    }
    return prime;
}
void main(void) {
    int num;
    scanf("%d",&num);
    prime(num);
    if(prime == 1) printf("is prime");
    else printf("is not prime");
    return 0;
}
