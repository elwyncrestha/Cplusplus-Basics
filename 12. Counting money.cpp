#include<iostream>
using namespace std;
int main()
{
	int amount,note1000,note500,note100,note50,note20,note10,note5,coin1;
	cout<<"Enter an amount:";
	cin>>amount;
	
	if(amount>1000)
	{
		note1000=amount/1000;
		amount-=note1000*1000;
	}
	if(amount>500)
	{
		note500=amount/500;
		amount-=note500*500;
	}
	if(amount>100)
	{
		note100=amount/100;
		amount-=note100*100;
	}
	if(amount>50)
	{
		note50=amount/50;
		amount-=note50*50;
	}
	if(amount>20)
	{
		note20=amount/20;
		amount-=note20*20;
	}
	if(amount>10)
	{
		note10=amount/10;
		amount-=note10*10;
	}
	if(amount>5)
	{
		note5=amount/5;
		amount-=note5*5;
	}
	if(amount>0)
	{
		coin1=amount/1;
	}
	
	cout<<"\n";
	cout<<"Note1000="<<note1000<<"\n";
	cout<<"Note500="<<note500<<"\n";
	cout<<"Note100="<<note100<<"\n";
	cout<<"Note50="<<note50<<"\n";
	cout<<"Note20="<<note20<<"\n";
	cout<<"Note10="<<note10<<"\n";
	cout<<"Note5="<<note5<<"\n";
	cout<<"Coin1="<<coin1;
	
	return 0;
}
