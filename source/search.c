#include "..\include\search.h"


int Search_Linear(int * array, int size, int num)
{
	int i = 0;
	int count = 0;

	for(i =0; i<size; i++)
	{
		if(array[i] == num)
		{
			count++;
		}
		else
			{;}
	}

	return count;
}


int Search_Binary(int * array, int size, int num)
{
	int i = 0;
	int first = 0;
	int last = size-1;
	int middle = (first+last)/2;

	while(last >= first)
	{
		if(array[middle] == num)
		{
			return FOUND;
		}
		else if(num > array[middle])
		{
			first = middle+1;
			middle = (first+last) /2;
		}
		else
		{
			last = middle-1;
			middle = (first+last)/2;
		}
	}

	return NOT_FOUND;
}
