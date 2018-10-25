#include<iostream>
using namespace std;
int main()
{
	int i,n,num1=0,num2=1,next;
	cout<<"Enter no. of terms:";
	cin>>n;
	
	cout<<"\nFibonacci series:\n";
	for(i=1;i!=n;i++)
	{
		cout<<num1<<" ";
		next=num1+num2;
		num1=num2;
		num2=next;
	}
	return 0;
}
