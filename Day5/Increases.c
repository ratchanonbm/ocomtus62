#include <stdio.h>

int main() {
    unsigned long long int n,num=3;
    scanf("%llu",&n);
    for(int i=0;i<n;i++){
        printf("%llu,",num);
        num += 5;
    }
}
