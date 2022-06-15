//program to reset the bit of the given integer

#include<stdio.h>

int main()
{ 
  int num, pos;

  //input from user
  printf("Enter the number : \n");
  scanf("%d",&num);

  printf("Enter the position : \n");
  scanf("%d", &pos);

  printf("Before Number = %d ", num);

  num = num &~(1<<pos);

  printf("After Number = %d ", num);

}


