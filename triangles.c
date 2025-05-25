#include <stdio.h>

void descending(int N)
{
	int i = 1;
	int j = 1;
	
	for (i = 1; i <= N; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("*"); 
		}
		printf("\n");
	}
}

void ascending(int N)
{
	int i = N;
	int j = 1;
	
	for (i = N; i >= 1; --i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("*"); 
		}
		printf("\n");
	}
}

void func3(int N)
{
	descending(N);
	ascending(N - 1);
}

void func4(int N)
{
	int number_of_lines = (N * 2);
	int i = 1;
	int j = number_of_lines / 2;
	int l = 1;
	
	
	for (i = 1; i <= N; ++i)
	{
		for (l = 1; l < j; ++l)
		{
			printf(" ");
		}
		--j;
		
		for (l = 1; l <= i; ++l)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void func5(int N)
{
	int number_of_lines = (N * 2);
	int i = N;
	int j = number_of_lines / 2;
	int l = 1;
	
	
	for (i = N; i >= 1; --i)
	{
		for (l = number_of_lines / 2; l > j; --l)
		{
			printf(" ");
		}
		--j;
		
		for (l = 1; l <= i; ++l)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void func5_spaced(int N)
{
	int number_of_lines = (N * 2);
	int i = N;
	int j = number_of_lines / 2;
	int l = 1;
	
	
	for (i = N; i >= 1; --i)
	{
		for (l = number_of_lines / 2; l > j; --l)
		{
			printf(" ");
		}
		--j;
		
		printf(" ");
		for (l = 1; l <= i; ++l)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void func6(int N)
{
	func4(N);
	func5_spaced(N - 1);
}

int main()
{
	descending(6);
	descending(0);
	descending(6);
	descending(1);
	descending(3);
	ascending(6);
	func3(4);
	func4(6);
	func5(6);
	func6(6);
}
