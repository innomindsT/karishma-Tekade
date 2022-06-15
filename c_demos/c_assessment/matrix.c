//program to find transpose of 2D matrix

#include<stdio.h>
int main()
{ 
   int mat[2][2], trans[2][2], i,j;
   printf("Enter matrix Elements: ");
     for(i=0;i<2;i++)
     {
        for(j=0;j<2;j++)
      {
          scanf("%4d", &mat[i][j]);
      }
  }

 printf("Matrix elements: \n");
     for(i=0;i<2;i++)
     {
    
         for(j=0;j<2;j++)
        { 
           printf("%4d",mat[i][j]);
        }
    
  printf("\n");

}

   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
           trans[j][i]=mat[i][j];
  
       }

}

printf("Transpose Elements: \n");
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
           printf("%4d", trans[i][j]);
      } 
      printf("\n");
}
return 0;
}





