#include<stdio.h>
int main () {
    printf("Hello World\n");
    int A[5][5]={0},i,j;
    float B[4]={0};
    for(i=0;i<5;i++)
   for(j=0;j<5;j++)
    A[i][j]=(i==j)?1:0;
    

    for(i=0;i<5;i++)
   { for(j=0;j<5;j++)
 
 {  // A[i][j]=(i=j)?1:0;
    printf("%d\t",A[i][j]);
}printf("\n");

   }
}
