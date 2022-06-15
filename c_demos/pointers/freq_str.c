// program to find highest frequency of character in a given string.

#include<stdio.h>
#include<stdlib.h>

int main ()
{
  char str[100], i;
  int count = 0;
  printf("Enter any string: "); //taking input from user
 fgets(str);                 //storing string


  for(i = 'a' ; i<= 'z' ; i++)
  {  
    count = 0;
    for(int j = 0; str[j]!=NULL; j++)
    {
        if(i == str[j])
	  count++;
}	  
    if(count > 0)
    printf("%i found in %d Times\n", i, count);
 }

} 




