#include <stdio.h>

int main() {
    int d,b=0,k=1;

    scanf("%d",&d);
    while(d != 0) {
        b = b + ((d % 8)*k);
        d = d / 8;
        k = k * 10;
    }

    printf("%d",b);
}
