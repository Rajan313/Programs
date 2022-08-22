#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,r,sum=0,*temp,c;
    ptr=(int*)malloc(sizeof(int));
    printf("enter the number\n");
    scanf("%d",ptr);
    temp=ptr;
    printf("For Verifiying %d  ",*temp);
    while(*ptr>0)
    {
        r=(*ptr)%10;
        sum+= (r*r*r);
        *ptr=(*ptr)/10;
    }
   
   printf("%d\n",sum);
   if (sum==*temp)
      printf("armstrong number");
   else
    printf("not armstrong no");
    
}
