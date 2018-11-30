#include <stdlib.h>
#include <stdio.h>

#include "..\include\search.h"

#define ARRAY_SIZE 100

void main (void)
{
  int numbers[ARRAY_SIZE] = {0};


  int i;
  int j;
  time_t t;
  unsigned char search_flag = 0;
  int error_count = 0;

  /* Intializes random number generator */
  srand((int) time(&t));

  /* Indent array with random numbers */
  for(i = 0; i<ARRAY_SIZE; i++)
  {
    numbers[i] = rand();
  }

  for(i = 0; j<RAND_MAX; j++)
  {
    if(Search_Linear(numbers, ARRAY_SIZE, j) == FOUND)
    {
      search_flag = 0;
      for(i = 0; i<100; i++)
      {
        if(numbers[i] == j)
        {
          search_flag = 1; //number found
          break;
        }
        else
          {;}
      }
      if(search_flag == 0)
      {
        printf("Test failed: %d is not included in the array but function return FOUND\n", j);
        error_count++;
      }
      else
        {;}
    }
    else
    {
      search_flag = 0;
      for(i=0; i<100; i++)
      {
        if(numbers[i] == j)
        {
          search_flag = 1; //number found
          break;
        }
        else
          {;}
      }
      if(search_flag == 1)
      {
        printf("Test failed: %d is included in the array but function returned NOT_FOUND\n", j);
        error_count++;
      }
      else
        {;}
    }

  }

  printf("Test finished with: %d error(s)", error_count);

}
