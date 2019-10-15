#include <stdio.h>

int main() {
    char name[30];
    int s1,s2,s3;
    float avg;

    printf("Enter name : ");
    scanf("%s",&name);
    printf("Enter score : ");
    scanf("%d %d %d",&s1,&s2,&s3);
    avg = (s1+s2+s3)/3;
    printf("Name : %s \nAverage score : %.1f",name,avg);
}
