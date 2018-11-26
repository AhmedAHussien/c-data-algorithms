#include "..\include\search.h"
#include "..\include\array.h"
#include <stdio.h>

#define ARRAY_SIZE	10


int main(void)
{
	int numbers[ARRAY_SIZE] = {0};
	int num_search = 0;
	int arg=0;
	printf("Select search method:-\n1.Linear search\n2.Binary search: ");
	scanf("%d", &arg);
	if(1 == arg)
	{
		printf("\nLinear search selected");
	}
	else if(2 == arg)
	{
		printf("\nBinary search selected");
	}
	else
	{
		printf("\ninvalid input");
		return 0;
	}

	Array_Scan(numbers, ARRAY_SIZE);
	Array_Print(numbers, ARRAY_SIZE);

	printf("\nEnter number to search for: ");
	scanf("%d", &num_search);

	if(1 == arg)
	{
		if(Search_Linear(numbers, ARRAY_SIZE, num_search) != NOT_FOUND)
		{
			printf("\nNumber %d found", num_search);
		}
		else
		{
			printf("\nNumber %d not found", num_search);
		}
	}
	
	else if(2 == arg)
	{
		if(Search_Binary(numbers, ARRAY_SIZE, num_search) != NOT_FOUND)
		{
			printf("\nNumber %d found", num_search);
		}
		else
		{
			printf("\nNumber %d not found", num_search);
		}
	}
	else
		{;}

	return 0;
}