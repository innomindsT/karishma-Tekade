#include<stdio.h>

int main()
{
  int arr[10], n, lcm, i, count;
  n=5;

  printf("Enter %d Numbers: ", n);
  for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
  
  i=0;
  lcm = arr[i];
  while(i<n)
  {
    if (lcm<arr[i])
       lcm = arr[i];
    i++;
    }

    while(1)
    {
      i=0;
      count=0;
      while(i<n)
      {
        i=0;
	count=0;
	while(i<n)
	{
	  if(lcm%arr[i]==0)
	    count++;
	  i++;
	  }
	  if(count==n)
	     break;
	  else
	     lcm++;
	 }

	 printf("\nLCM of above numbers is :- ");
	 printf("%d", lcm);
	 return 0;
        }
}
