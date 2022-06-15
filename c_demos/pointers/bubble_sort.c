//program to write bubble sorting 

#include<stdio.h>

#define SIZE 10
#define true  1
#define false 0

//user define data
typedef int bool_t;

#define SWAP(a, b) {int temp = a; a = b; b = temp;}

//function prototype

void display_array_elements(int arr[]);
void bubble_sort(int arr[]);

//entry point function

int main(void)

{  
    int arr[ SIZE ] = {10,30,60,50,70,40,80,20,90,100};

   printf("before sorting : ");
   display_array_elements(arr);  //function call

   bubble_sort(arr);             //function call        

   printf("after sorting : ");
   display_array_elements(arr);   //function call

   return 0;

}


//function defination

void bubble_sort(int arr[])
{
  int itr;
  int pos;
  int iterations = 0;
  int comparisons=0;

  for(itr = 0; itr < SIZE-1; itr++) {  // outer loop is for iteraions
     iterations++;
     for( pos = 0; pos < SIZE-itr-1; pos++ ) {  //inner for loop is for pos
      
        //compare elements which are at consecutive postions
	//if( prev pos ele > its next pos ele ) => pair of elemnts is not in order=> swap them
	comparisons++;
	if( arr[pos] > arr[pos+1])
	  SWAP(arr[pos], arr[pos+1]);
	 }
}

printf("no. of iterations are : %d\n", iterations);
printf("no. of comparisons are : %d\n", comparisons);
}

//displaying array elements
void display_array_elements(int arr[])
{ 
  int index;
  printf("array elements are: " );
  for( index = 0; index < SIZE ; index++ )
  {
    printf("%4d" , arr[ index ]);
  }
  printf("\n");
 } 
   



