#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	
	int s = a+b+c/2;                     // semiperimeter
	int area = sqrt((s*(s-a)*(s-b)*(s-c)));
	
	if((a+b>c) && (b+c>a) && (a+c>b) && (area>0))
	        cout<<"YES";
	else
	    cout<<"NO";
	    
	return 0;
}
