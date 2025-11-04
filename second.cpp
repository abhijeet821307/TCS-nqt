#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,j;
	cin>>i>>j;
	if(i<0 || i>j || (i<j && j>9999)){
	    cout<<"Invalid input";
	    return 0;
	}
	int n=j-i+1;
	int sum=n*(i+j)/2;
	cout<<sum;
	return 0;

}
