#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int n,count=0;
	vector<int> arr;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	    if(n%i==0){
	        count++;
	        arr.push_back(i);
	    }
	        
	cout<<count<<endl;
	
	for(int i=0; i<arr.size(); i++)
	    cout<<arr.at(i)<<" ";
	return 0;
}
