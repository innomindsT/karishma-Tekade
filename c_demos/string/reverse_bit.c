//program to reverse the bit of a given integer

#include<stdio.h>
int main() 
{
   int num,r, rev = 0;
   printf("Enter the number : ");
   scanf("%d", &num);

   while(num!=0)
   {
     r= num%10;
     rev=rev*10+r;
     num=num/10;
 }

 printf("reverse of a number is %d " ,rev);

} 



 
