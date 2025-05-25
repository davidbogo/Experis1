#include <stdio.h>
int main()
{
	char date[] = "2025-05-23";
	int year, month, day;
	
	scanf("%d-%d-%d", &year, &month, &day);
	
	printf("%d\n", year);
	printf("%d\n", month);
	printf("%d\n", day);
	
	sscanf(date, "%d-%d-%d", &year, &month, &day);
	
	printf("%d\n", year);
	printf("%d\n", month);
	printf("%d\n", day);
}
