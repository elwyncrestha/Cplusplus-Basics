#include<iostream>
using namespace std;
int main()
{
	int a,n,reverse=0,digit;
	cout<<"Enter a number:";
	cin>>n;
	
	a=n;
	
	while(n!=0)
	{
		digit=n%10;
		reverse=reverse*10+digit;
		n/=10;
	}
	cout<<"Reverse of "<<a<<"="<<reverse;
	return 0;
}
