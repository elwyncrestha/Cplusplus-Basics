#include<iostream>
using namespace std;
int main()
{
	int x,y,temp;
	cout<<"Enter values of x and y:";
	cin>>x>>y;
	temp=x;
	x=y;
	y=temp;
	cout<<"\nThe value of x is:"<<x;
	cout<<"\nThe value of y is:"<<y;
	return 0;
}
