#include <stdio.h>

int main() {
    int n,money,b1000=100,b500=100,b100=100;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&money);

        b1000 = b1000 - (money/1000);
        money = money % 1000;

        b500 = b500 - (money/500);
        money = money % 500;

        b100 = b100 - (money/100);
    }
    printf("b1000 = %d\nb500 = %d\nb100 = %d",b1000,b500,b100);
}
