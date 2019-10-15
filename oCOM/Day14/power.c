#include <stdio.h>
//#include <math.h>

long long int b,p;
int f_power(long long int b,long long int p);

int main() {
    int result;
    scanf("%lld %lld",&b,&p);
    result = f_power(b,p);
    printf("%lld power by %lld = %lld",b,p,result);
    return 0;
}

int f_power(long long int b,long long int p){
    int sum=1;
    for(long long int i=0;i<p;i++){
        sum *= b;
    }
    return sum;
}
