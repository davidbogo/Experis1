#include <stdio.h>

unsigned int rotate(unsigned int bits, int shift)
{
	if (shift >= 0)
	{
		shift %= 32;
		return (bits >> shift | (bits << (32 - shift)));
	}
	else
	{
		shift = -shift;
		shift %= 32;
		return (bits << shift | (bits >> (32 - shift)));
	}
}

int main()
{
	printf("%u\n", rotate(10, 2));
	printf("%u\n", rotate(12, 1));
	printf("%u\n", rotate(16, -1));
	printf("%u\n", rotate(1, 1));
}
