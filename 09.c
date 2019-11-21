#include<stdio.h>
int main(void)
{
    int a,n,sum,i,q;
    printf("Enter a,n\n");
    scanf("%d %d",&a,&n);
    q=n;
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+a*q;
        a=a*10;
        q--;
    }
    printf("%d",sum);
    return 0;
}