#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// Global type variable
struct node *ptr, *temp,*start=NULL;

// return_type fun_name (parameter);  == function defination

/* return_type fun_name (parameter)
{  

    data
    return_type;

}  == function

// insert at beginning*/

void insert_at_beg();
void insert_at_end();
void insert_at_mid();
void delete_at_beg();
void delete_at_end();
void delete_at_mid();
void display();

void insert_at_beg()
{  //creation of block
   ptr = (struct node*)malloc(sizeof(struct node));

   // Data access ptr->data
   // Address access ptr->next

   printf("Enter the data\n");
   scanf("%d",&ptr->data);
   ptr->next=NULL;

   // insertion at begining 

   if (start==NULL)
        start=ptr;
    else
       {
       temp=start;
       start=ptr;
       ptr->next=temp;
       }
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
     temp->next=start;


}

void insert_at_end()
{   
     //creation of block
   ptr = (struct node*)malloc(sizeof(struct node));

   // Data access ptr->data
   // Address access ptr->add

   printf("Enter the data\n");
   scanf("%d",&ptr->data);
   ptr->next=NULL;

   //insertion at last

   if(start==NULL)
     start=ptr;
   else
   {
     temp=start;
      while(temp->next!=NULL)
        {
            temp=temp->next;
        }
     temp->next=ptr;
     ptr->next=start;
     
   }

}

void delete_at_beg()
{
    if(start==NULL)
      printf("Underflow\n");
    else
    {
     temp=start;
     start=start->next;
     free(temp);
    }
}

void delete_at_end()
{   
    struct node *d;
    if(start==NULL)
     printf("Underflow\n");
    else
     temp=start;
      while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        d=start;
        while(d->next!=temp)
        {
            d=d->next;
        }
        d->next=start;
        free(temp);
      
   

}







void display()
{
    struct node *d;
    d=start;
    while(d->next!=start)
    {    
        printf("%d\n",d->data);
        d=d->next;
    }
    printf("\n");
}


void main(){
 int ch;
    while(1)
    {
        printf("ENTER YOUR CHOICE:\n1.INSERT AT BEGINING.\n2.INSERT AT LAST.\n3.DISPLAY .\n4.Delete at Beg\n5.Delete at last\n6. EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_at_beg();
                break;
            case 2: insert_at_end();
                break;
            case 3: display();
                break;
            case 4:delete_at_beg();
                break;
            case 5:delete_at_end();
                break;
            case 6: exit(0);
                break;
            default:
                printf("WRONG ENTRY.");
        }
    }
}