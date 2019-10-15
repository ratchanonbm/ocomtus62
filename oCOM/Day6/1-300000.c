#include <stdio.h>
#include <math.h>

int main() {
    int prime;
    unsigned long long int sum=0,root,i,num,c;
    scanf("llu",&num);
    for(i=2;i<=num;i++){
        root = sqrt(i);
        prime = 1;

        if (i==1) prime = 0;
        else if (i==2) prime = 1;
        else if (i!=2&&i%2==0) prime = 0;
        else {
            for(int j=3;j<=root;j+=2){
                if(i%j==0) {
                    prime = 0;
                    break;
                }
            }
        }
        if(prime == 1) {
            printf("%llu ",i);
            c++;
        }
    }
    printf("\n%llu",c);
}
