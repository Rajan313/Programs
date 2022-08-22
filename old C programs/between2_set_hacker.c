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
int main(){
int m,n,a[100],b[100],c[100],count=0,flag=0,temp,i,j,k;;
scanf("%d%d",&m,&n);

for(i=0;i<m;i++)
 scanf("%d",&a[i]);
 
for(i=0;i<n;i++)
 scanf("%d",&b[i]);
 

for(i=2;i<=b[0];i++)
 { 
     k=0;
     for(j=0;j<m;j++)
      if(i%a[j]==0)
        k++;
   
     if(k==m)
     {
     c[count]=i;
     count++;
     }
 } 
 
 
 for(i=0;i<count;i++)
  {
      temp=0;
  for(j=0;j<n;j++)
   {
       if(b[j]%c[i]==0)
      temp++;
   }
   if(temp==n)
    flag++;
  }
  printf("%d",flag);
   
}