#include <stdlib.h>
#include <stdio.h>

#include "../include/search.h"

#define ARRAY_SIZE 100

void main (void)
{
  unsigned int numbers[ARRAY_SIZE] = {0};


  unsigned int i;
  unsigned int j;
  time_t t;
  unsigned char search_flag = 0;
  int error_count = 0;

  printf("Running test on binary search\n");

  /* Intializes random number generator */
  srand((int) time(&t));

  /* Indent array with sorted random numbers */

  numbers[0] = 0;

  for(i = 1; i<ARRAY_SIZE; i++)
  {
    numbers[i] = numbers[i-1] + ((unsigned char)rand() % 100);
  }


  for(j = 0; j<=numbers[99]; j++)
  {
    if(Search_Binary(numbers, ARRAY_SIZE, j) == FOUND)
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

  printf("Test finished with: %d error(s)\n", error_count);

}
