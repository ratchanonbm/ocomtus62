#include <stdio.h>

void sum_odd(int n);

void main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    sum_odd(n);
}
void sum_odd(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        printf("%d",2*i);
        if(i!=n-1) printf(" + ");
        sum += i*2;
    }
    printf(" = %d",sum);
}
