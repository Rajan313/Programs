#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
} *ptr,*start=NULL;



void create()
{
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the value:\n");
    scanf("%d",&ptr->val);
    ptr->next=NULL;
}

void iab()
{
    create();
    struct node *temp;
    if(start==NULL)
        start=ptr;
    else
    {
        temp=start;
        start=ptr;
        ptr->next=temp;
    }
}

void ial()
{
    create();
    struct node *d;
    d=start;
    if(start==NULL)
        start=ptr;
    else
    {
        
        while(d->next!=NULL)
         d=d->next;
    
        d->next=ptr;
        
    }
}

void display()
{
    struct node *d;
    d=start;
    while(d!=NULL)
    {
        
        printf("%d->",d->val);
        d=d->next;
    }
    printf("\n");
}
void search(int element)
{
   int c=0;
   struct node *s;
   s=start;

   if(s==NULL)
   printf("List is emtpy, search cannot be Performed\n");
   else{

       while(s!=NULL)

       {
           if(s->val==element)
           {
               c++;
              break;
           }
           else
           s=s->next;
       }
   } 
   if(c!=0)
   printf("Search element Found\n");
   else
   printf("Search element Not Found\n");
}

/*void delete(int element)
{
    int c=0;
    struct node *s,*temp;
    s=start;
    if(s==NULL)
    printf("List is empty\n");

    else
    {
        while(s!=NULL)
        {
            if(s->val==element)
            
                c++;
            else
              
                s=s->next;
            
        }


    }
    if(c!=0)
    printf("Element Deleted succesfully\n");
    else
    printf("Element not present\n");

}
*/
void main()
{
    int ch,ele;
    while(1)
    {
        printf("ENTER YOUR CHOICE:\n1.CREATE AND INSERT AT BEGINING.\n2.CREATE AND INSERT AT LAST.\n3.DISPLAY THE RECORDS.\n4.Search Element\n5.DELET\n6. EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: iab();
                break;
            case 2: ial();
                break;
            case 3: display();
                break;
            case 4:printf("Enter the element to search\n");
                   scanf("%d",&ele);
                   search(ele);
                break;
                case 5:
                printf("Enter the element to delete\n");
                   scanf("%d",&ele);
                   delete(ele);
                   break;

            case 6: exit(0);
                break;
            default:
                printf("WRONG ENTRY.");
        }
    }
}