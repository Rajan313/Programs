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
int jleap(int a);
int gleap(int a);
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1700&&n<=1917)
    {
        printf("%d.09.%d",(12+jleap(n)),n);
    }
    else if(n>1918&&n<=2700){
        printf("%d.09.%d",(12+gleap(n)),n);
    }else {
     printf("12.09.%d",n);
    }
    return 0;
}

int jleap(int a)
{
    if(a%4==0)
     return 0;
     else
     return 1;
}


int gleap(int a)
{
    if(a%400==0)
    return 0;
    else if(a%4==0&&a%100!=0)
    return 0;
    else 
    return 1;
    
    
    return 0;
}
