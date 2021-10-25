#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long n,result,max=0;
	cin>>n;
	long long arr[n];
	
	for(int i=0;i<n;i++)
	    cin>>arr[i];

	  sort(arr, arr + n);

	  for(int i=0;i<n;i++)
	  {
	      result = arr[i]*(n-i);
	      if(result>=max)
	        max = result;
	  }
	  cout<<max;
	
	return 0;
}
