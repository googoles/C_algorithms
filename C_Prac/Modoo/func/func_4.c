#include <stdio.h>

int prime(int n)
{
    int tmp, cnt = 0;
    for(int i = 2; i <= n; i++)
    {
        cnt = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                cnt++;
        }
        if (cnt == 2)
            tmp++;
    }

    return tmp;
}

int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d\n", &n);
    printf("Result: %d", prime(n));

    return 0;
}
