#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int i;
    int flag = 0;
    for (n = 2; n <= 100; n++)
    {
        flag = 0;
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("% 6d", n);
    }
    return 0;
}