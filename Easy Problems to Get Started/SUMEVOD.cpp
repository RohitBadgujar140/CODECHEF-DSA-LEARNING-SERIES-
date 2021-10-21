#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i=1;
	long long oddsum=0,evensum=0;
	int flag1=0,flag2=0;
	cin>>n;
	
	while(flag1+flag2<n+n)
	{
	    if(i%2!=0){
	        oddsum = oddsum + i;
	        flag1++;
	    }
	    else{
	        evensum = evensum + i;
	        flag2++;
	    }
	    i++;
	    
	}
	
	cout<<oddsum<<" "<<evensum;
	
	return 0;
}
