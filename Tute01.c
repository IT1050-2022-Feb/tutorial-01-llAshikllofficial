/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main (){
  
  int mark1,mark2,Avg;
  float sum;

// collecting the user inputs 
  printf("Enter the mark1: ");
  scanf ("%d",&mark1);
  printf("Enter the mark2: ");
  scanf ("%d",&mark2);

// calculations
sum = mark1+mark2;
 Avg = sum/2;

//display the outputs 
printf("\nAverage marks is %d.", Avg);

  return 0;
}

