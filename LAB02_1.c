#include <stdio.h>

int main() {
    int a=2,b=3,c=4,d=5,e=6,f=7,x;

    //1
    x = a+e/f * c;
    printf("%d\n",x);
    //2
    x = (f - e)*(c / a);
    printf("%d\n",x);
    //3
    x = a*d/a + e/b;
    printf("%d\n",x);
    //4
    x = a*(d/(a+e))/b;
    printf("%d\n",x);
}
