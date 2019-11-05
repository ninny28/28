#include<stdio.h>
int main()
{
    double x,y;
    printf(":");
    scanf("If",&x);
    if(x<=50){
        y=0.53*x;
    }
    else
    {
        y=0.53*50+(x-50)*0.58;
    }
    printf("s=%f",y);
}