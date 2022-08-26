#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int mat[10][10];
int result[10][10]={0};

void substring(int d,int r,string res,int n);
int main() {
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        cin>>mat[i][j];
    string res="";
   substring (0,0,res,n);

   
    return 0;
   
}

void substring(int d,int r,string res,int n)
{
   if(d==(n-1)&&r==(n-1)){
       cout<<res<<" ";
       return;
   }
   if(d<0||d>=n||r<0||r>=n||result[d][r]==1||mat[d][r]==0)
   return;
   result[d][r]=1;
   substring(d-1,r,res+"T",n);
   substring(d+1,r,res+"D",n);
   substring(d,r-1,res+"L",n);
   substring(d,r+1,res+"R",n);
    result[d][r]=0;
    
     
}

    


