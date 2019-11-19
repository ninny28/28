#include<stdio.h>
int main(void)
{
    int F1,F2,F3;
    int i;
    F1=1;
    F2=1;
    printf("%d %d",F1,F2);

    for(i=3;i<=20;i++)
    {
      F3=F1+F2;
      printf("%d ",F3);
      F1=F2;
      F2=F3;
    }
    return 0;
}