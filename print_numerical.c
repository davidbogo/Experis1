#include <stdio.h>

void print_binary(int number)
{
	int mask = 0x1;
	int i = 31;
	int int_bits[32] = {0};
	
	if (number < 0)
	{
		int_bits[0] = 1;
	}
	
	while (number && i)
	{
		if (mask & number)
		{
			int_bits[i] = 1;
		}
		
		number >>= 1;
		--i;
	}
	
	for (i = 0; i < 32; ++i)
	{
		printf("%d", int_bits[i]);
	}
	printf("\n");
}

void printer(int number)
{
	print_binary(number);
	printf("%o\n", number);
	printf("%x\n", number);
}

int main()
{
	printer(10);
	printer(12);
	printer(16);
	printer(-1);
}
