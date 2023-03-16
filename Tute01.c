/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   float mark1,mark2,avg;//avg=average
   
   printf("Enter the first and second marks :");
   scanf("%f %f",&mark1,&mark2);
   
   
   avg=mark1+mark2/2.0;
   
   printf("average of the two marks:",avg);
   
   
   return 0;
}

