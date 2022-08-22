#include<stdio.h>
int main()
{
    int *a,b=10;
    a=&b;
    *(a+1)=20;
    printf("%d\t%d",*a,*(a+1));
    }