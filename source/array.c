#include "..\include\array.h"
#include <stdio.h>


extern void Array_Print(int * array, int size)
{
	int i =0;
	printf("\nArrayElements: ");
	for(i=0; i<size; i++)
	{
		printf("%d", array[i]);
		if(size-1 == i)
		{
			printf(".");
		}
		else
		{
			printf(" ,");
		}
	}
}

extern void Array_Scan(int * array, int size)
{
	int i = 0;
	printf("\n");
	for(i=0; i<size; i++)
	{
		printf("Enter element index no. %d: ", i);
		scanf("%d", &array[i]);
	}
}