#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1)
    {
		return 0;
	}
	
    if (n == 2)
    {
		return 1;
    }
    
    if (n % 2 == 0)
    {
		return 0;
	}

    for (int i = 3; i * i <= n; i += 2)
	{
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
	printf("%d\n", is_prime(5));
	printf("%d\n", is_prime(21));
	printf("%d\n", is_prime(19));
	printf("%d\n", is_prime(29));
	printf("%d\n", is_prime(39));
}
