#include <stdio.h>
#include <string.h>
void main()
{
  int i,j,c=1,n,k;
scanf("%d",&n);

for(i=0;i<n;i++)
{
    k=n+1;
for(j=0;j<n;j++)
{
if(i>=j)
k--;    
printf("%d",k);
}
for(j=1;j<n;j++)
{
if((i+j)>=n)
k++;
printf("%d",k);
}
printf("\n");
}

for(i=n-2;i>=0;i--)
 {

for(j=0;j<n;j++)
{
 k=(i<j)?i:j;
 printf("%d",n-k);

}

for(j=n-2;j>=0;j--)
{
 k=(i<j)?i:j;
 printf("%d",n-k);

}
printf("\n");
 }

}