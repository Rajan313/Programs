#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
5
5
void main()
{
    int n,i,a,m[100],sum=0;
    char ch;
   printf("the\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&m[i]);
  scanf("\n%c",&ch);

   a=(ch=='b')?0:1;
   i=a;
   while(i<n){
   sum+=m[i];
   i=i+2;
   }
   printf("%d\n",sum);

}