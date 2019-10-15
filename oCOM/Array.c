#include <stdio.h>

int main(){
  int n,sum=0;
  scanf("%d",&n);
  int num[n];
  for(int i=0;i<n;i++) scanf("%d",&num[i]);
  for(int i=0;i<n;i++){
    sum = sum + num[i];
    printf("%d",num[i]);
    if(i!=n&&n!=1) printf("+");
  }
  printf("=%d",sum);
}
