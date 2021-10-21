#include<bits/stdc++.h>
using namespace std;

int main()
{   // your code goes here
    int n,sumi=0,sumj=10;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(int j=sumi+1;j<=sumi+5;j++)
                cout<<j<<" ";
            sumi = sumi+10;
            cout<<"\n";
        }
        else
        {
            for(int j=sumj;j>=sumj-4;j--)
                cout<<j<<" ";
            sumj = sumj+10;
            cout<<"\n";
        }
    }
    
    return 0;
}
