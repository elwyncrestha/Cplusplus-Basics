#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	c = ( (a>b)&&(a!=b) );
	cout<<a<<">"<<b<<"&&"<<a<<"!="<<b<< "=" <<c;
	
	return 0;
}
