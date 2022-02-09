/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int distance, amount = 0; //declaring variables
  
  printf("Enter the distance: "); //getting the input from user
  scanf("%d", &distance);

  if( distance > 0)
  {
    if ( distance <= 30) //calculating the amount for distances less than 30km
    {
      amount = distance * 50;
    }

    else
    {
      amount  = 30 * 50 + (distance - 30) * 40; //calculating the amount for distances greater than 30km
    }
  }

  else 
    printf("Invalid distance\n"); //displaying an error message for invalid distances

  printf("Amount = %d\n", amount);//displaying the final amount
  
  return 0;
}
