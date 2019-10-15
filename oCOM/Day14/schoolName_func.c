#include <stdio.h>

void sName (int n);
char name[] = "Benjamarachutit School";

int main() {
    int n;
    scanf("%d",&n);
    if(n<=22) sName(n);
    else printf("Limit is : 22");
    return 0;
}
void sName(int n){
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
}
