#include<stdio.h>
void main()
{
   int a[10],b[10],m,n;
   printf("Enter the size of Set A\n");
   scanf("%d",&m);
   for(int i=0;i<m;i++)
   scanf("%d",&a[i]);
   

   printf("Enter the size of Set B\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   scanf("%d",&b[i]);

   for(int i=0;i<m;i++)
   for(int j=0;j<n;j++)
   if(a[i]==b[j])
   printf("%d\t",a[i]);


}