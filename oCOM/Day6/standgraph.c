#include <stdio.h>

int main() {
    int n,max=0;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        if(num[i]>max) max = num[i];
    }
    for(int i=max;i>0;i--){
        for(int j=0;j<n;j++){
            if(num[j] >= i) printf(" * ");
            else printf("   ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        if(num[i]<10) printf(" %d ",num[i]);
        else printf("%d ",num[i]);
    }
}
