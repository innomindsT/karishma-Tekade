//program to reverse the string

//including headers files
#include<stdio.h>
#include<string.h>

//entry point function
int main() {
  char str[100];

  //taking input from user
  printf("Enter a string:\n");
  scanf("%s", str);
  int i;
  for(i=strlen(str); i>=0 ; i--) {
    printf("%c", str[i]);
    }
  return 0;
}  
