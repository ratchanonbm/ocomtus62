#include <stdio.h>

int main(){
    int n,num;
    scanf("%d",&n);

    if(n%2==1){
        int c,cp;
        cp = n/2;
        for(int i=0;i<n;i++){
            scanf("%d",&num);
            if(i==cp) c = num;
        }
        printf("%d",c);

    } else {
        int cp1,cp2,c1,c2;
        cp1 = n/2;
        cp2 = (n/2) + 1;
        for(int i=0;i<n;i++){
            scanf("%d",&num);
            if(i==cp1) c1 = num;
            if(i==cp2) c2 = num;
        }
        printf("%d %d",c1,c2);
    }


}
