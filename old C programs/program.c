#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int a=0,b=0,c=0,i,j;
   for(i=1;i<n;i++)
   {
 for(j=i+1;j<n;j++)
 {
   // a=(((i&j)>(i&(j+1)))&&(a<k))?(i&j):(i&(j+1));
    
    b=(((i|j)>(i|(j+1)))&&(b<k))?(i|j):(i|(j+1));
    printf("%d\n",b);
  // c=(((i^j)>(i^(j+1)))&&(c<k))?(i^j):(i^(j+1));
 }}  
  
}
   


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
