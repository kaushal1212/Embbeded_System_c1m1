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
  printf("sorted array :\n");
  sort_Array(test, SIZE);
  print_array(test, SIZE);
  printf("Statstics of given array :\n")
  print_statstics(test, SIZE);
 
}

/* Add other Implementation File Code Here */
