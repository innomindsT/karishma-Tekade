//program to write a function to find endianess of a CPU

#include<stdio.h>

int main()
{  
  unsigned int i = 1;

  char *c = (char*)&i; // character pointer c is pointing to an integer ,*c will be 1 (little endianess) and *c will be 0 for big endianess machine

  if (*c)
      printf("Little endian");

  else
     printf("Big endian");

  getchar();
  return 0;

}
