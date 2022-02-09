/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int x, i, tot = 0;//declaring variables

  printf("Enter a number: ");//getting the keyboard input
  scanf("%d", &x);
  
  for( i = 1; i <= x; i++) //loop to calculate the sum
    {
      tot = tot + i;
    }

  printf("Sum = %d\n", tot);//displaying the final sum
  return 0;
}

