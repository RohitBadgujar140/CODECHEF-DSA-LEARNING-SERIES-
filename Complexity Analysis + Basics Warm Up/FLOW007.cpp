#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t,n,lastdigit;
	long long reverseno=0;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    while(n!=0)
	    {
	        lastdigit = n%10;
	        reverseno = (reverseno*10) + lastdigit;
	        n = n/10;
	    }
	    
	    cout<<reverseno<<endl;
	    reverseno = 0;
	}
	return 0;
}
