#include <stdio.h>

int factorize(int n)
{
    int i;

    for(i = 2; i <= n; i++)
    {
        if (n % i == 0) {
			
			n /= i;
			printf("%d X ", i);

			i = 1;
		}

    }
}

int main(){
    
}