#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
   int t;
   scanf("%d",&t);
   int ans[t];
   for(int i=0;i<t;i++)
   ans[i]=house();
}
int house()
{
 int n,count=0,pos;
 scanf("%d",&n);
 char s[n];
 for(int j=0;j<n;j++)
{
    if(s[j]==0)
    {
        int k=j;
        while(s[k]!=1)
        k++;
        if(abs(j-k)>abs(pos-j))
        count+=abs(pos-j);
        else
        count+=abs(j-k);
        
    }else
    pos=j;

}
return count;

}






#include<stdio.h>
int main()
{
    int t,n,b,temp,c=0,j,i,k;
    scanf("%d\n",&t);
    
    for (k= 0; k<t; k++) 
    {
    scanf("%d%d",&n,&b);
    int pr[n];
    for(i=0;i<n;i++)
    scanf("%d",pr[i]);
    
     for (i = 0; i < n-1; i++)    
     for (j = 0; j < n-i-1; j++)
        if (pr[j] > pr[j+1])
        {
            temp =pr[j];
            pr[j] = pr[j+1];
            pr[j+1] = temp;
        }
        
      for (i = 0; i < n; i++)
      if(pr[i]<b)
          {
            b=b-pr[i];
            c++;
              
          }
      
    }
    
}