#include<iostream>
#include<string>
using namespace std;
int main()
{
	int password;
	string username;
	
	cout<<"Please enter username and password:\n";
	cout<<"Username:";
	getline(cin,username);
	cout<<"\n";
	cout<<"Password:";
	cin>>password;
	
	if(username=="elwyncrestha")
	{
		if(password==51412468)
		{
			cout<<"Login successful !!!";
		}
		else
		{
			cout<<"Wrong password ! \nEnter correct password !!!";
		}
	}
	else
	{
		cout<<"Wrong username! \nEnter correct username !!!";
	}
	return 0;
}
