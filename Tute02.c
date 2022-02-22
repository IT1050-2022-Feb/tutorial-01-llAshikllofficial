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
//this program shows  paid for a rented vehicle.
int main() {

  int distance;
  float amount=0;
  
//asking a user input
  printf("Enter the Distance you Travel ? : ");
  scanf("%d",&distance);

  //calculations
if(distance<=30)
  amount=50.00*distance;
else//(distance>30)
  amount= (50.00*30)+(40.00*(distance-30));
  
//display the output 
printf("\nTotal rent Amount : %.2f",amount);
  
  return 0;
}
