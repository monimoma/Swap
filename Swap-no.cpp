#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b;
	return 0;
}
