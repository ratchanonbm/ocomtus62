#include <stdio.h>
int result;
int sum(int n1,int n2,int n3);

int main() {
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    result = sum(n1,n2,n3);
    printf("%d + %d + %d = %d",n1,n2,n3,result);
    return 0;
}
int sum(int n1,int n2,int n3){
    result = n1 + n2 + n3;
    return result;
}
