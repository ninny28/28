#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
    int i;
    for (i = 2; i <= sqrt; i++)
    {
        if (x % i == 0)
        {
            break;
        }
    }
    if (i > sqrt(x))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i, j, count = 0;

    for (i = 2; i <= 100; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%5d", i);
            count++;
        }
        if (count % 10 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}