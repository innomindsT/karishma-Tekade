//program to print pascal triangle

#include<stdio.h>

int main()
{ 
  int rows, cal = 1, m, i, j;
  printf("Enter number of rows: "); 
  scanf("%4d", &rows);

  for(i=0; i<rows; i++) //outer loop for displaying
  {
       for(m=1; m <= rows-i; m++)
            printf(" ");

       for(j=0;  j <= i; j++) //inner loop for displaying
       {
            if (j==0 || i==0) //either outer loop value or inner-loop value is 0" it print 1

	        cal = 1;
             else
	         cal = cal*(i-j+1)/j;


	     printf("%4d" , cal);
	}
	printf("\n");

    }
    
     return 0;
}     
