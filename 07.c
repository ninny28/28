#include<stdio.h>
int main(void)
{
    int n,i,sum;
    printf("Enter n:\n");
    scanf("%d",&n);
    sum=1;
    for(i=1;i<=n;i++)
{
    sum=sum*i;
}
int a,b,term;
a=sum;
term=0;
for(a=1;a<=b;a++)
{
    term=term+a;
}
printf("The term is %d",term);
return 0;
}