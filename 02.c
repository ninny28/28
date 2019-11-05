#include<stdlib.h>

int main(int argc,char const*argv[])
{
    float charge,cost;
    printf("Enter dianliang:\n");
    scanf("%f",&charge);

    if(charge<=50){
        cost=charge*0.53;
    }else{
        cost=charge*0.53+(charge-50)*0.05;
    }

    printf("Cost is %f.\n",cost);

    return 0;
}