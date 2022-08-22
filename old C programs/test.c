#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main()
{
    int t[15],a[15],i,r,n,temp,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&t[i]);
            //  printf("%d\n",t[i]);
     for(i=0;i<n;i++)
    {
        temp=t[i];
        c=0;
        while(temp>0)
        {
            r=temp%10;
            if(t[i]%r==0&&r!=0)
            c++;
            temp/=10;
        }
        a[i]=c;
           //   printf("%d\n",c);
    }
        
       for(i=0;i<n;i++)
      printf("%d\n",a[i]);  
}*/
    void main()
    {

        int n=7;
        printf("%d %d %d %d ",n++,n--,--n,++n,n);
    }
    
    
