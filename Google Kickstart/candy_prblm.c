#include<stdio.h>
#include<stdlib.h>
//int candy();
int candy()
{
    int m,n,sum=0,t,i;
    
     scanf("%d",&m);
     scanf("%d",&n);
    for(i=0;i<m;i++)
    {
     scanf("%d",&t);
     sum=sum+t;
    }
    return (sum%n);
    
}
void main()
{   int t,i=0;
    scanf("%d",&t);
    int Ans[t];
    
    while(i<t)
    {
        Ans[i]=candy();
        i++;
        
    }
    for(i=0;i<t;i++)
    printf("Case #%d: %d\n",i+1,Ans[i]);
}
