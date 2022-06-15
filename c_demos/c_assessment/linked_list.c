//program to insert the node in a given linked list

#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

//user defined structure

typedef struct element
{
  int data;
  struct element *next; //self referential pointer

}element_t;


typedef struct list
{
  element_t *head;
  int element_count;

 }list_t;
 

 typedef int bool_t;

//function declaration:

void init_list(list_t *ptr);
element_t *create_element(int data);
bool_t is_list_empty(list_t *ptr);
void display_list(list_t *ptr);
int count_element(list_t *ptr);
void insert_element_at_first_position(list_t *ptr, int data);
void delete_element_at_first_position(list_t *ptr);
void free_list(list_t *ptr);


int menu(void)
{ 
  int choice;
  //display menu list
  printf("0. exit\n");
  printf("1. insert the element at first position\n");
  printf("2. delete the element at first position\n");
  printf("3. display list\n");

  //accept choice from user
  printf("Enter the choice : ");
  scanf("%d", &choice);

  //return user entered choice to the calling function 
  return choice;

 }

 enum menu_options{
    EXIT, INSERTFIRST, DELFIRST, DISPLIST
 };

//entry point function

int main(void)
{
  int pos;
  int data;
  //create an empty linked list
  list_t l1;
  init_list(&l1);

  while(1)
  { 
    int choice = menu();
    switch(choice)
    { 
       case EXIT:
           free_list(&l1);
	   exit(0);


       case INSERTFIRST:
           printf("Enter the data: ");
	   scanf("%d", &data);
	   insert_element_at_first_position(&l1, data);
	   break;

       case DELFIRST:
           delete_element_at_first_position(&l1);
	   break;

       
       case DISPLIST:
	    display_list(&l1);
	    break;
     }
}
return 0;
}

void init_list(list_t *ptr)
{
  ptr->head = NULL;
  ptr->element_count = 0;
}

bool_t is_list_empty(list_t *ptr)
{
   if(ptr->head == NULL)
       return true;
   else 
       return false;

   //return(ptr->head == NULL);
}

//function defination

int element_count(list_t *ptr)
{
   int count = 0;
   //if list is not empty
   if( !is_list_empty(ptr))
   {
     //start traversal of the list from the first element
     element_t *trav = ptr->head;
     //traversel the list till last node including it
     while(trav != NULL){
         count++;//increment the counter by 1
	 trav = trav->next;//move trav pointer towards its next node
       }
     }
     
    return count;
}

element_t *create_element(int data)
{
  //step-1" allocate memory dynamically for a element
  element_t *temp = (element_t *)malloc(sizeof(element_t));
  if(temp == NULL)
  {
    perror("malloc() failed!!!\n");
    /*perror is a c lib function not only prints users error msg but also a    actual system error messages*/
    exit(1);
  }
  //step-2: initialize memebrs of the node
   temp->data = data;
   temp->next = NULL;

   //step-3: return starting addr of dtnamically allocated node to the calling function
   return temp;
}

void insert_element_at_first_position(list_t *ptr, int data)
{
  //step-1 : create a newnode - dynamically by using dynamic memeory allocation
  element_t *newnode = create_element(data);

  //step-2 : if list is empty => attach newly created node to the head
  if(is_list_empty(ptr)) //if list is empty
  {
    //store an addr of newly created node into the head
    ptr->head = newnode;
    ptr->element_count++;
  } 
   else//step-3: if list is not empty
   {
      //store an addr of current first node into the next part of newly created node
      newnode->next = ptr->head;
      //attach newly created node to the head
      ptr->head = newnode;
      ptr->element_count++;
 } 
}
void delete_element_at_first_position(list_t *ptr)
{
  //step1: check list is not empty- if list is not empty then only we can delete node from it
  if(!is_list_empty(ptr))
  {
    //step-2: if list contains only one node
    if(ptr->head->next == NULL){
    //delete the node and make head as NULL
        free(ptr->head);//free(1000);
        ptr->head = NULL;
        ptr->element_count = 0;
    }else//step3: if list contains more than one nodes
    {
     //store an addr cur first node in temp which is to be deleted
       element_t *temp = ptr->head;
     //attach cur second node to the head
       ptr->head = ptr->head->next;
     //delete the node
       free(temp);
       temp=NULL;//to avoid dangling pointer
       ptr->element_count--;
     }
   }
   else
      printf("list is empty!!!\n");
      
}      

void display_list(list_t *ptr)
{
  //if list is not empty
  if(! is_list_empty(ptr))
  {
    //start traversal from first node
    element_t *trav = ptr->head;
    //traverse the list till last node
    printf("head-> ");
    while(trav != NULL)
    {
      printf("%d ->", trav->data); //display data part of each node
      trav = trav->next;//move trav towards its next node
    }
    printf("null\n");
    printf("no. of elements in a list are: %d\n", ptr->element_count);
  }
  else
     printf("list is empty !!!\n");
}

void free_list(list_t *ptr)
{
   if(! is_list_empty(ptr) ){
      while(! is_list_empty(ptr))
      delete_element_at_first_position(ptr);

      printf("list freed succesfully.... all heap memory released....\n");
   }
   else
      printf("list is empty !!!\n");
}      







