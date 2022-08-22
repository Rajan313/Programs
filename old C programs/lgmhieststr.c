#include<stdio.h>
#include<string.h>
void freq(char s[]);
int main()
{ 
  int t;
  scanf("%d",&t);
  char  a[t][1000];
   for(int i=0;i<t;i++)
   scanf("%s",a[i]);
   for(int i=0;i<t;i++)
   freq(a[i]);

} 
void freq(char s[])
{
  int c[20]={1},j=0;
  for(int i=0;s[i]!='\0';i++)
  {  
    if(s[i]==s[i+1])
    c[j]++;
    else
    {
    j++;
    c[j]=1;
    }
  }

 int  k=-1 , i=0;
 while(i<j)
 {
   k+=(c[i]);
   if(c[i]<=9){
   printf("%d%c",c[i],s[k]);
   }
   else {
   printf("9%c",s[k]);
   c[i]-=9;
   k=k-c[i];
   i=i-1;
   }
   i++;
 }

   printf("\n");

} 
 