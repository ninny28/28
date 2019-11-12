#include <stdio.h>
int main(void)
{
    int grade, score;
    printf("Enter score:\n");
    scanf("%d", &score);
    switch (grade)
    {
    case 0:
        printf("Falling");
        break;
    case 1:
        printf("Poor");
        break;
    case 2:
        printf("Average");
        break;
    case 3:
        printf("Good");
        break;
    default:
        printf("Excellent");
        break;
    }
    return 0;
}
