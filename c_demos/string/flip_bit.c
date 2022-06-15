//program to flip/toggle the bit of a given integer

#include<stdio.h>
int main() 
{ 
 int num, pos;
 printf("Enter the number : \n");
 scanf("%d", &num);

 printf("Enter the position : \n");
 scanf("%d", &pos);

 num = num ^ 1<<pos;  //  left shift the bits by using EX-OR operator
 printf("Toggle bit = %d \n", num);
 }
