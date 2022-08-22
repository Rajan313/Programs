#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char reverse(char *a,int n);
char reverse(char *a,int n)
{
  
    if(*(a+n)=="\0")
    {
        return 0;
    }
    else
        return reverse(a+n,n-1);
        printf("%s",a[n]);
        return 0;
}
void main()
{
    char a[10]=("Akash");
    reverse(a,a.len());
}