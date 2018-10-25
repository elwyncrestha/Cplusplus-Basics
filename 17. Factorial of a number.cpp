#include<iostream>
using namespace std;
int main()
{
	int n,i,factorial=1;
	cout<<"Enter a number:";
	cin>>n;
	
	for(i=n;i!=1;i--)
	{
		factorial*=i;
	}
	cout<<"Factorial="<<factorial;
	return 0;
}
