#include <stdio.h>

int main() {
    unsigned long long int b,d=0,k=1;
    scanf("%d",b);
    while(b!=0){
        d = d + ((b%10)*k);
        b = b/10;
        k = k * 2;
    }
}
