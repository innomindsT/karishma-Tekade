//program to find max/min in a given array

#include<stdio.h>

int main()
{
  //a[size]= 10,50,20,30-----> max=50  min=10

  int a[100], size,i,max;
  printf("Enter size of Array: ");
  scanf("%d", &size);
  printf("Enter value in  Array: ");
  for(i=0;i<size;i++)
  {
     scanf("%d", &a[i]);
  }   
  max=a[0];
  for(i=0;i<size;i++)
  {
     if(a[i]>max)
     {
       max=a[i];
     }  
  }
  printf("Maximum value of Array: %d", max);
  return 0;
} 



