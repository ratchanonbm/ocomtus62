#include <stdio.h>
#include <math.h>

int main() {
    int num,d=0,p=0,root,i;

    scanf("%d",&num);
    root = sqrt(num);

    if (num==1) printf("is not Prime");
    else if (num==2) printf("is Prime");
    else if (num!=2&&num%2==0) printf("is not Prime");
    else if (num%root==0) printf("is not Prime");
    else {
        while(i<=root){
            if(num%i==0){
                goto nprime;
                break;
            }
            i+=2;
        }
        goto prime;
    }
    prime:
        printf("is prime");
    nprine:
        printf("is not prime");
}
