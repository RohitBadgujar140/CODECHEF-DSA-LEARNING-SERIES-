#include<bits/stdc++.h>
using namespace std;

int main()
{   // your code goes here
    int n,k,value,flag=0;
    
    cin>>n>>k;
    
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(value==k){
            cout<<"1";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"-1";
    
    return 0;
}
