#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	while(true)
	{
	    cin>>n;
	    if(n<100 && n!=42)
	        cout<<n<<endl;
	    else
	        break;
	}
	return 0;
}
