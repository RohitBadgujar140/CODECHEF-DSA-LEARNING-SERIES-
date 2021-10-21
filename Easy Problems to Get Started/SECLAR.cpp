#include<bits/stdc++.h>
using namespace std;

int main()
{   // your code goes here
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    if(n1>=n2 && n1>=n3)
    {
        if(n2>=n3)
            cout<<n2;
        else
            cout<<n3;
    }
    else if(n2>=n3 && n2>=n1)
    {
        if(n3>=n1)
            cout<<n3;
        else
            cout<<n1;
    }
    else if(n1>=n2)
        cout<<n1;
    else
        cout<<n2;
    
    return 0;
}
