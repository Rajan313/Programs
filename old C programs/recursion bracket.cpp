#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void substring(int op,int cl,string res);
int main() {
    int n;
    cin>>n;
    string res="";
    substring (n,n,res);
    
    return 0;
   
}
void substring(int op,int cl,string res)
{
   if(op==0&&cl==0){
       cout<<res<<endl;
       return;
   }
    if(op!=0){
        substring(op-1,cl,res+"(");
    }
    if(cl>op)
    {
        substring(op,cl-1,res+")");
        
    }
     
}

    


