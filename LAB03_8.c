#include <stdio.h>

int main() {
    char id[30],n[30];
    float p,q,t;


    printf("Enter Product ID : ");
    scanf("%s",&id);
    printf("Enter Product Name : ");
    scanf("%s",&n);
    printf("Enter Product Unit Price : ");
    scanf("%f",&p);
    printf("Enter Quantity : ");
    scanf("%f",&q);
    t = p * q;
    printf("ID:%s, Name:%s, Unit Price:%.2f, Quantity:%.2f, Total Amount:%.2f",id,n,p,q,t);
}
