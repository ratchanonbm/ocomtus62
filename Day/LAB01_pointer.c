/*#include <stdio.h>

int main() {
    int x;
    int *point;
    x = 15;

    printf ("Address point = %p\n",point);
    printf ("Address x = %p\n",&x);

    point = &x;

    printf ("Address point = %p\n",point);
    printf ("Value point = %d\n",*point);


    return 0;
}
*/
#include <stdio.h>
void main(){
    int  x = 1, y = 2;
    int  *ip, *iq;
    printf("x = %p\ty= %p\n",&x,&y);
    printf("x = %d\ty= %d\n",x,y);
    ip    =  &x;
    printf("ip = %p\n",ip);
    printf("x = %p\ty= %p\n",&x,&y);
    printf("x = %d\ty= %d\n",x,y);
    y     =  *ip;
    printf("y = %d\n",y);
    printf("x = %p\ty= %p\n",&x,&y);
    printf("x = %d\ty= %d\n",x,y);
    *ip   =  0;
    printf("ip = %d\n",*ip);
    printf("x = %p\ty= %p\n",&x,&y);
    printf("x = %d\ty= %d\n",x,y);
    y     = 5;
    printf("x = %p\ty= %p\n",&x,&y);
    printf("x = %d\ty= %d\n",x,y);
    ip    =  &y;
    printf("ip = %p\n",ip);
    printf("x = %p\ty= %p\n",&x,&y);
    printf("x = %d\ty= %d\n",x,y);
    *ip   =  3;
    printf("ip = %d\n",*ip);
    printf("x = %p\ty= %p\n",&x,&y);
    printf("x = %d\ty= %d\n",x,y);
    iq    = ip;
    printf("ip = %p\t",ip);
    printf("ip = %d\n",*ip);
    printf("iq = %p\t",iq);
    printf("iq = %d\n",*iq);
    printf("x = %p\ty= %p\n",&x,&y);
    printf("x = %d\ty= %d\n",x,y);

}
