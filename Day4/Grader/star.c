#include <stdio.h>

int main(){
    int x;

    scanf("%d",&x);

    for(int i=1;i<=x;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=i-x;j++){
            printf("%d",i);
        }
        for(int j=1;j<=x-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i-x;j++){
            printf("%d",i);
        }
    }
    //for(int i=1;i<=x-1;i--){
    //
    //}
}
