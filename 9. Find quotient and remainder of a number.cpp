#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"\nEnter divisor:";
	cin>>a;
	
	cout<<n<<"/"<<a<<"="<<n/a;
	cout<<"\n";
	cout<<"Quotient="<<n/a;
	cout<<"\n";
	cout<<"Remainder="<<n%a;
	
	return 0;
}
