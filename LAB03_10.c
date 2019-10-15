#include <stdio.h>

int main() {
    char name[30];
    int b,t;

    printf("Enter name : ");
    scanf("%s",&name);
    printf("Enter Birth of year : ");
    scanf("%d",&b);
    printf("Enter current Year : ");
    scanf("%d",&t);

    printf("%s is %d years old",name,t-b);
}
