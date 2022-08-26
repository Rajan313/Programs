#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int dp[100];
    

void step(int n)
{
   dp[0]=1;
    dp[1]=2;
    dp[2]=4;
     if(n==1)
       cout<<dp[0]; 
    if(n==2)
       cout<<dp[1];
    if(n==3)
        cout<<dp[2];
    
    for (int i=3;i<n+1;i++)
    {
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    if(n>3)
        cout<<dp[n-1];
    
    
    
        
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    
    step(n);
    
    return 0;
}

