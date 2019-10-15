#include <stdio.h>

int main() {
  int num,max,min;

  scanf("%d",&num);

  max = num;
  min = num;

  while(num!=1001){
    scanf("%d",&num);
    if(num > max){
        max = num;
    }
    if(num < min){
        min = num;
    }
  }
  printf("%d",max - min);

}
