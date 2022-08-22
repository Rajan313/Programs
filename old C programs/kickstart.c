#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int house();
int main()
{
   int t;
   scanf("%d",&t);
   int ans[t];
  for(int i=0;i<t;i++)
   ans[i]=house();

  for(int i=0;i<t;i++)
 printf
 ("Case #%d: %d\n",(i+1),ans[i]);

}
int house()
{
 int n,count=0,pos;
 scanf("%d",&n);
 char s[n+1];
 scanf("%s",s);
 for(int j=0;s[j]!='\0';j++)
{
    if(s[j]=='0')
    {
      

        int k=j;
        while(s[k]=='0')
        {k++;
         if(s[k]=='\0')
        k=n*n;
        
        }
      
        if(abs(j-k)>=abs(pos-j)){
       
        count+=abs(pos-j);
      
    }else
        count+=abs(j-k);
        
    }else
    pos=j;
  
  
}


return count;

}