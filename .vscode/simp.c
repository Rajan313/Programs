
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

int main ()
{
    
    int n,p,l,s;
    scanf("%d%d",&n,&p);
    if (p<=n)
    {
       l= ((n-p)+((n+1)%2))/2;
       s=p/2;
        if(l<s)
        printf("%d",l);
        else {
        printf("%d",s);
        }
    }
  return 0;  
}