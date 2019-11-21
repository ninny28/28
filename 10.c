#include<stdio.h>
int main(void)
{
    int i,n;
    double sum=1,t=1;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       t=t*i/(i*2+1);
       sum=sum+t;
    }
    printf("pi=%0.5f",sum*2);
    return 0;

}