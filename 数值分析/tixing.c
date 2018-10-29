#include<stdio.h>
#include<math.h>

double f(float x);

int main(void){
    int M=10;
    int i;
    float b=2.0,a=0.0;
    float h;
    double sum=0;
    h=(b-a)/M;
    printf("h = %f\n",h);
    for(i=1;i<=M-1;i++){
        sum+=f(a+i*h);
    }
    sum=h/2*(f(a)+f(b)+2*sum);
    printf("sum = %f",sum);
    return 0;
}
double f(float x){

    return sin(x)*exp(-x*x);

}