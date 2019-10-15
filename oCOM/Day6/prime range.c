#include <stdio.h>
#include <math.h>

int main() {
    int prime,c=0;
    unsigned long long int num,stop,root,i;

    scanf("%llu %llu",&num,&stop);

    for(i=num;i<=stop;i++){
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
    printf("\n%d",c);
}
