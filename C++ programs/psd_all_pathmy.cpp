#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void substring(int d,int r,string res,int n);
int main() {
    int n;
    cin>>n;
    string res="";
    substring (0,0,res,n);
    
    return 0;
   
}
void substring(int d,int r,string res,int n)
{
   if((d+r)==2*(n-1)){
       cout<<res<<endl;
       return;
   }
    if(d<=r)
    substring(d+1,r,res+"D ",n);
    
    if(r<=d)
    substring(d,r+1,res+"R ",n);
    return;
     
}

    


