#include<stdio.h>
int main(void)
{
    int choice,i;
    double price;
    for(i=1;i<=5;i++){
        printf("[1]Select apples\n");
        printf("[2]Select pears\n");
        printf("[3]Select oranges\n");
        printf("[0]Select grapes\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        if(choice==0)
        break;
        switch(choice){
            case 1:price=3.00;break;
            case 2:price=2.50;break;
            case 3:price=4.10;break;
            default:price=10.20;break;
        }
        printf("price=%0.01f\n",price);
    }
    printf("Thanks\n");
    return 0;
}