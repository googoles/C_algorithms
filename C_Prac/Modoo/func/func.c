#include <stdio.h>

int MagicBox(int n)
{
    n += 4;
    return n;
}

int main(){
    int n;
    printf("Plz put a number into the Box: ");
    scanf("%d",&n);
    printf("Number in the Box: %d",MagicBox(n));
    return 0;
}