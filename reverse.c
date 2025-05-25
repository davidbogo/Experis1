#include <stdio.h>

int reverse(int check)
{
    int reversed = 0;

    if (check < 0)
    {
        return 0;
    }

    while (check != 0)
	{
		reversed *= 10;
        int digit = check % 10;
        reversed += digit;
        check = check / 10;
    }

    return reversed;
}

int main()
{
	printf("%d\n", reverse(334477));
	printf("%d\n", reverse(12321));
	printf("%d\n", reverse(11112234));
	printf("%d\n", reverse(23455432));
}
