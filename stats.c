/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <to print statstics >
 * 
 *  this file will print statstics mentioned below of given array of data
    - Max
    - Min
    - Mean
    - Meadian
    - description & declaraion of function is in stats.h header file
 *
 * @author <Kaushal Dekivadia>
 * @date <30-05-2020>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  printf("Elements(Data) of given array is listed below\n");
  print_array(test, SIZE);
  printf("\n\nsorted array :\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  printf("\n\nStatstics of given array :\n");
  print_statstics(test, SIZE);
 
}

/* Add other Implementation File Code Here */
void print_array(unsigned char *array, unsigned int length)
{
  for(int i=0;i<length;i++)
  {
    printf(" %d\t",array[i]);
  }
}

void sort_array(unsigned char *array, unsigned int length)
{
  for(int i=0;i<length;i++)
  {
    for( int j=i;j<length;j++)
    {
      if(array[j]>array[i])
      {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

unsigned char find_mean(unsigned char *array, unsigned int length)
{
  unsigned int sum = 0;
  for(int i=0; i<length; i++)
  {
    sum += array[i];
  }

  return (sum/length);
}

unsigned char find_median(unsigned char *array, unsigned int length)
{
  if(length%2 == 0)
     return  ((array[length/2]) + (array[(length+1)/2]))/2;
   else
    return (array[length+1/2]);
}

unsigned char find_maximum(unsigned char *array, unsigned int length)
{
    return array[0];
}

unsigned char find_minimum(unsigned char *array, unsigned int length)
{
  return array[length-1];
}

void print_statstics( unsigned char *array, unsigned int length)
{
  printf("mean = %d",find_mean(array,length) );
  printf("\nmedian = %d",find_median(array,length) );
  printf("\nMaximum data = %d",find_maximum(array,length) );
  printf("\nMinmum data = %d\n",find_minimum(array,length) );

}