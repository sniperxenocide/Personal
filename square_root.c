#include <stdio.h>

double sqrt(double n){
    double result = 1.0;
    double increment = 1.0;
    int cnt = 0;
    while(1){
        cnt++;
        if(result*result==n) break;
        if(result*result>n){
            if(result*result-n<0.000001) break;
            else {
                result-=increment;
                increment=increment/10.0;
            }
        }
        result+=increment;
    }
    printf("Total Iteration: %d\n",cnt);
    return result;
}

int main() {
    double n;
    scanf("%lf",&n);
    printf("%lf",sqrt(n));
    return 0;
}
