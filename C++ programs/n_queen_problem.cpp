#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[10][10]={0};
int sol=0;
void print(int n)
{
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
     cout<<arr[i][j]<<" ";
     cout<<endl;
        }
        cout<<endl;
}
void queen(int r,int c,int n,int q)
{    
    //cout<<"==============================="<<endl;
    //cout<<"row "<<r<<" col "<<c<<"queen "<<q<<endl;
    if(q==n&&(r+c)==q&&sol==0)
     {   print(n);
        arr[r][c]=0;
        sol=1;
        return;
    }
    for(int i=0;i<n;i++)
    if(arr[i][c]==1||arr[r][i]==1){
       // cout<<"case1"<<endl;
    return;
    }
    if(arr[r-1][c-1]==1)
    {  // cout<<"dia1"<<endl;
        return;
    }
    if(arr[r-1][c+1]==1)
    {  // cout<<"dia2"<<endl;
        return;
    }
    
    arr[r][c]=1;
    //print(n);
    //cout<<"queen"<<q<<endl;
   
    for(int i=0;i<n;i++)
    queen(r+1,i,n,q+1);
     arr[r][c]=0;
}


int main() {
    int n;
     cin>>n;
    for(int i=0;i<n;i++)
    queen(0,i,n,0);
    
    
    return 0;
}
