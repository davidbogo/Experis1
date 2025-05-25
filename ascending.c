#include <stdio.h>

int is_ascending(int check)
{
    int cur_biggest = 10;

    if (check < 0)
    {
        check = -check;
    }

    while (check != 0)
	{
        int digit = check % 10;
        if (cur_biggest <= digit)
        {
        	return 0;
        }
        cur_biggest = digit;
        check = check / 10;
    }

    return 1;
}

int main()
{
	printf("%d\n", is_ascending(123456789));
	printf("%d\n", is_ascending(12321));
	printf("%d\n", is_ascending(1234456789));
	printf("%d\n", is_ascending(987654321));
	printf("%d\n", is_ascending(-123456789));
}
