#include<stdio.h>
#define N 5
int main(void)
{
    int a[N],i,max;
    printf("Enter array a:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(i<=i++)
        {
            max=i++;
        }else{
            max=i;
        }
    }
    printf("Max is %d",max);
    return 0;
}