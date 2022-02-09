/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, tot = 0; //declaring variables
  float avg;

  printf("Enter mark 1: "); //getting the inputs from user
  scanf("%d", &mark1);

  printf("Enter mark 2: ");
  scanf("%d", &mark2);

  tot = mark1 + mark2; //calculating the total
  
  avg = tot / 2.0; //calculating the average

  printf("Average = %.2f\n", avg); //displaying the average
  
  return 0;
}

