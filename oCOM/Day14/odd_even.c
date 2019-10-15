#include <stdio.h>
int num;
int odd_even(int num);

int main(){
    scanf("%d",&num);
    odd_even(num);
    return 0;
}

int odd_even(int num){
    if(num%2==0) printf("ODD");
    else printf("EVEN");
}
