#include <stdio.h>

int summation(int n)
{
    int sum = 0;
    for(int i = 0; i < n+1; i++)
    {
        sum += i;
    }
    return sum;
}

int main(void)
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("Summation : %d",summation(n));

    return 0;
}