#include<stdio.h>
int main()
{
    int n,score;
    printf("Enter n:\n");
    scanf("%d",&n);
    if(90<n&&n<=100){
        printf("%d A",score);
    }else if(80<n&&n<=90){
        printf("%d B",score);
    }else if(70<n&&n<=80){
        printf("%d C",score);
    }else if(60<n&&n<=70){
        printf("%d D",score);
    }else{
        printf("%d E",score);
    }
    return 0;
}