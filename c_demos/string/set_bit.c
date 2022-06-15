//program to set/reset the bits in a given integer

#include<stdio.h>
int main()
{
  int num, pos;

  //input from user
  printf("Enter the number : \n");
  scanf("%d", &num);

  printf("Enter the position : \n");
  scanf("%d", &pos);

  printf("Before number = %d\n", num);

  //to set the bit
  num = num | 1<<pos;   //  ex:- 5->101  101 & 0011 = 001 

  printf("After number = %d\n", num);

  } 



