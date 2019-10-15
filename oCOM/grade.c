#include <stdio.h>

int main() {
  int n;

  scanf("%d",&n);

  float avg[n];

  for(int i=0;i<n;i++){
    int std;
    float g,sum=0;

    scanf("%d",&std);

    for(int j=0;j<std;j++){
      scanf("%f",&g);
      sum = sum + g;
    }
    avg[i] = sum/std;
  }

  for(int i=0;i<n;i++){
    printf("%.2f\n",avg[i]);
  }
}
