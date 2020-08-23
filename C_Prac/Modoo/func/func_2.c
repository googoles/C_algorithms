#include <stdio.h>

int slave(int property, int income)
{
    property += income;
    return property;
}

int main(void)
{
    int property = 100000;
    int income;
    printf("Today's Income: ");
    scanf("%d", &income);
    printf("Net: %d\n",slave(income,property));
    return 0;
}