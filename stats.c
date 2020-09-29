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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
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

  unsigned int median,mean,maximum,minimum;
  unsigned char sorted_test[SIZE];
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
  print_array(test,SIZE);
  median = find_median(test,SIZE);
  mean = find_mean(test,SIZE);
  maximum = find_maximum(test,SIZE);
  minimum= find_minimum(test,SIZE);
  sorted_test = sort_array(test,SIZE);

}
void print_statistics(undigned char *t,unsigned int s){}
void print_array(undigned char *t,unsigned int s){}
unsigned int  find_median(undigned char *t,unsigned int s){}
unsigned int  find_mean(undigned char *t,unsigned int s){}
unsigned int  find_maximum(undigned char *t,unsigned int s){}
unsigned int  find_minimum(undigned char *t,unsigned int s){}
unsigned char *  sort_array(undigned char *t,unsigned int s){}







/* Add other Implementation File Code Here */
