#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%2==1) n = n - 1;
    for(int i=2;i<=n;i+=2){
        printf("%d",i);
        if(i!=n) printf(",");
    }
}
