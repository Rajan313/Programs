#include <stdio.h>
int main()
{   int t,i=0, a,b;
    scanf("%d",&t);
    int Ans[t];
    char str[3][10]={"FIRST","SECOND","ANY"};
    
    while(i<t)
    {
      
       scanf("%d%d",&a,&b);
       if(a<b)
         Ans[i]=0;
       else if(a>b)
         Ans[i]=1;
        else 
         Ans[i]=2;
       i++;
    }
    for(i=0;i<t;i++)
      printf("%s\n",str[Ans[i]]);
}

#include <stdio.h>
int main()
{   int t,i=0, a,b;
    scanf("%d",&t);
    int Ans[t];
   
    while(i<t)
    {
      
       scanf("%d%d",&a,&b);
       if(a<b)
         printf("FIRST\n");
       else if(a>b)
          printf("SECOND\n");
        else 
          printf("ANY\n");
       i++;
    }
   
}