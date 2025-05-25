#include <stdio.h>

int is_palindrome(int check)
{
    int original = check;
    int reversed = 0;

    if (check < 0)
    {
        return 0;
    }

    while (check != 0)
	{
        int digit = check % 10;
        reversed = reversed * 10 + digit;
        check = check / 10;
    }

    return ((original == reversed) ? 1 : 0);
}

int main()
{
	printf("%d\n", is_palindrome(334433));
	printf("%d\n", is_palindrome(12321));
	printf("%d\n", is_palindrome(11112234));
	printf("%d\n", is_palindrome(23455432));
}
