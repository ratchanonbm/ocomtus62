#include <stdio.h>

int main() {
    int num,sums=0;

    scanf("%d",&num);

    while(num != 0){
        sums = sums + (num % 10);
        num = num / 10;
    }
    printf("%d",sums);
}
