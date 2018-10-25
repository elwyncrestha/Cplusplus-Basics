#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,sum,sub,mul,div;
	char ch;
	cout<<"Choose the operation:\n";
	cout<<"Addition, Substraction, Multiplication or Division:";
	ch=getche();
	cout<<"\n\n";
	
	cout<<"Enter first number:";
	cin>>a;
	cout<<"\n";
	cout<<"Enter second number:";
	cin>>b;
	
	if(ch=='A')
	{
		sum=a+b;
		cout<<a<<"+"<<b<<"="<<sum;
	}
	if(ch=='S')
	{
		sub=a-b;
		cout<<a<<"-"<<b<<"="<<sub;
	}
	if(ch=='M')
	{
		mul=a*b;
		cout<<a<<"*"<<b<<"="<<mul;
	}
	if(ch=='D')
	{
		div=a/b;
		cout<<a<<"/"<<b<<"="<<div;
	}
	getch();
}
