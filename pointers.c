#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum_of_elements(int arr[], size_t size)
{
	int i;
	int sum = 0;
	
	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	
	return sum;
}

void reverse_in_place(int arr[], size_t size)
{
	int i;
	
	for (i = 0; i < (size / 2); ++i)
	{
		arr[i] += arr[size - 1 - i];
		arr[size - 1 - i] = arr[i] - arr[size - 1 - i];
		arr[i] -= arr[size - 1 - i];
	}
}

void count_even_odd(int arr[], size_t size)
{
	int i;
	int even = 0;
	int odd = 0;
	
	for (i = 0; i < size; ++i)
	{
		if ((arr[i] % 2) == 0)
		{
			++even;
			continue;
		}
		++odd;
	}
	
	printf("num of odd elements: %d, num of even elements: %d\n", odd, even);
}

void copy_arr(int arr1[], int arr2[], size_t size)
{
	int i;
	
	for (i = 0; i < size; ++i)
	{
		*arr2 = *arr1;
		++arr2;
		++arr1;
	}

}

int removeElement(int* nums, int nums_Size, int val)
{
    int i;
    int k = 0;
    int* no_val_pointer = nums;

    for (i = 0; i < nums_Size; ++i)
    {
        if (*nums != val)
        {
            *no_val_pointer = *nums;
            ++k;
            ++no_val_pointer;
        }
        ++nums;
    }
    
	return k;
}

int comp(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}


void count_duplicate(int arr[], size_t size)
{
	int i = 0;
	qsort(arr, size, sizeof(int), comp);
	for (i = 1; i < size; ++i)
	{
		if ((arr[i] == arr[i - 1]) && (arr[i] != arr[i - 2]))
		{
			printf("duplicate element: %d\n", arr[i]);
		}
	}
}

void prefix_sum(int arr[], size_t size)
{
	int i;
	
	for (i = 1; i < size; ++i)
	{
		arr[i] += arr[i - 1];
	}
}

int is_two_sum(int arr[], size_t size, int target)
{
	int i = 0;
	int j = (size - 1);
	qsort(arr, size, sizeof(int), comp);
	
	while(i != j)
	{
		if (target > (arr[i] + arr[j]))
		{
			++i;
		}
		else if (target < (arr[i] + arr[j]))
		{
			--j;
		}
		else
		{
			return 1;
		}
	}
	
	return 0;
	
}

void shift_arr(int arr[], size_t size, int shift)
{
	int i;
	int inter = 0;
	
	if (shift > 0)
	{
		inter = arr[size - 1];
		for (i = (size - 1); i > 0; --i)
		{
			arr[i] = arr[i - 1];
		}		
		arr[0] = inter;
	}
	else if (shift < 0)
	{
		inter = arr[0];
		for (i = 0; i < (size - 1); ++i)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = inter;
	}
	
}

void reverse_string()
{
	char buffer[50];
	int len, i;
	char inter;
	
	printf("write a word: ");
	gets(buffer);
	len = strlen(buffer);
	
	for (i = 0; i < (len / 2); ++i)
	{
		inter = buffer[i];
		buffer[i] = buffer[len - 1 - i];
		buffer[len - 1 - i] = inter;
	}
	
	printf("%s\n", buffer);
}

void asterisk(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int i, j;
	char astr;
	
	for (i = 0; i < len2; ++i)
	{
		astr = str2[i];
		for (j = 0; j < len1; ++j)
		{
			if (str1[j] == astr)
			{
				str1[j] = '*';
			}
		}
	}
}

void char_remove(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int write = 0;
	int j, i;
	int remove = 0;

	for (i = 0; i < len1; ++i)
	{
		remove = 0;
		for (j = 0; j < len2; ++j)
		{
			if (str1[i] == str2[j]) 
			{
				remove = 1;
				break;
			}
		}
        if (!remove)
		{
            str1[write] = str1[i];
            ++write;
        }
    }
    str1[write] = '\0';
}

int main()
{
	int i = 0;
	int array[8] = {0,1,2,2,3,0,4,2};
	int array2[8] = {0};
	int array3[8] = {0, 1, 4, 5, 5, 5, 5, 5};
	int array4[8] = {0, 1, 4, 5, 4, 8, 17, 40};
	char str1[] = "tratatakaka";
	char str2[] = "kr";
	char str3[] = "*";
	
	printf("%d\n", sum_of_elements(array, 8));
	
	reverse_in_place(array, 8);
	for (i = 0; i < 8; ++i)
	{
		printf("%d\n", array[i]);
	}
	
	count_even_odd(array, 8);
	
	copy_arr(array, array2, 8);
	for (i = 0; i < 8; ++i)
	{
		printf("%d\n", array2[i]);
	}
	
	removeElement(array2, 8, 2);
	
	count_duplicate(array, 8);
	for (i = 0; i < 8; ++i)
	{
		printf("%d\n", array[i]);
	}
	
	prefix_sum(array3, 8);
	for (i = 0; i < 8; ++i)
	{
		printf("%d ", array3[i]);
	}
	
	printf("\n%d ", is_two_sum(array4, 8, 57));
	printf("%d ", is_two_sum(array4, 8, 58));
	printf("%d ", is_two_sum(array4, 8, 56));
	printf("%d\n ", is_two_sum(array4, 8, 25));
	
	shift_arr(array4, 8, 7);
	for (i = 0; i < 8; ++i)
	{
		printf("%d ", array4[i]);
	}
	shift_arr(array4, 8, -7);
	printf("\n");
	for (i = 0; i < 8; ++i)
	{
		printf("%d ", array4[i]);
	}
	printf("\n");
	
	reverse_string();
	
	asterisk(str1, str2);
	printf("%s\n", str1);
	
	char_remove(str1, str3);
	printf("%s\n", str1);
}
