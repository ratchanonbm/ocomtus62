#include <stdio.h>

int main() {
    int n1,n2,n3,min,gcd;
    scanf("%d",&n1);
    min = n1;
    scanf("%d",&n2);
    if (n2<min) min = n2;
    scanf("%d",&n3);
    if (n3<min) min = n3;
    for(int i=min;i>=1;i--){
        if(n1%i==0&&n2%i==0&&n3%i==0){
            gcd = i;
            break;
        }
    }
    printf("%d",gcd);
}
