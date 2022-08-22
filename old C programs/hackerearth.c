#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

char* solve (int* A, int N ) {
   int i,r,sum=0;
   for(i=0;i<N;i++)
   {
      while(*(A+i)>0&&i<N/2)
      {
         r=*(A+i)%10;
         *(A+i)/=10;

      }

      if(i>=N/2)
      r=*(A+i)%10;
      printf("%d\t",r);
       sum=sum*10+r;



   }
   printf("%d",sum);
   if(sum%11==0)
   return ("OUI");
   else
   return("NON");
}

int main() {
    int N;
    scanf("%d", &N);
    int i_A;
    int *A = (int *)malloc(N*sizeof(int));
    for(i_A=0; i_A<N; i_A++)
    	scanf("%d", &A[i_A]);

    char* out_ = solve(A,N);
    printf("%s", out_);
}