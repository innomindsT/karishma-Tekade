//program to find gcd of five integers

#include<stdio.h>

int main(void)
{
   int arr[5];
   int i, gcd;
   printf("Enter 5 numbers: ");
   for(i=0; i<5; i++)
   {
      scanf("%d", &arr[i]);
   }

   gcd = arr[0];
   int j =1;
   while(j < 5)
   {
       if(arr[j] %gcd == 0)
       {
           j++;
	}

	else
	{
	   gcd = arr[j] %gcd;
	   i++;
	 }
	}

	printf("GCD = %d\n", gcd);
	return 0;
}
