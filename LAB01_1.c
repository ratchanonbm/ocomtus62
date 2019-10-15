#include <stdio.h>

int main() {
    int a,b,w,x,y,z;
    a = 5;
    b = 6;
    w = a++;
    x = ++a;
    y = b--;
    z = --b;

    printf("a=%d b=%d w=%d x=%d y=%d z=%d",a,b,w,x,y,z);

}
