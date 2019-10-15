#include <stdio.h>

int main() {
    float grade,k,g_sum=0,k_sum=0,g_avg;
    for(int i=0;i<15;i++){
        scanf("%f %f",&grade,&k);
        g_sum += grade * k;
        k_sum += k;
    }
    g_avg = g_sum / k_sum;
    printf("%.2f",g_avg);
}
