#include <stdio.h>

int new_division(int dividend, int divisor)
{
    int i = 0;
    int origin_dividend = dividend;
    int origin_divisor = divisor;
    int max_flag = 0;

    if (dividend < 0)
    {
        if (dividend == -2147483648)
        {
            dividend = 2147483647;
            max_flag = 1;
        } 
        else
        {
            dividend = -dividend;
        }
    }

    if (divisor < 0)
    {
        if (divisor == -2147483648)
        {
            divisor = 2147483647;
        }
        else
        { 
            divisor = -divisor;
        }
    }

    while (0 < dividend)
    {
        dividend -= divisor;
        if (0 <= dividend)
        {
            ++i;
        } 
    }
    
    if ((origin_dividend < 0 && origin_divisor > 0) || (origin_dividend > 0 && origin_divisor < 0))
    {
        i = -i;
        if (max_flag)
        {
            --i;
        }
    }
    return i;   
}

int main()
{
	printf("%d\n", new_division(6, 2));
	printf("%d\n", new_division(8, 2));
	printf("%d\n", new_division(10, 2));
	printf("%d\n", new_division(9, 3));
	printf("%d\n", new_division(9, 2));
	printf("%d\n", new_division(-2147483648, 2));
}
