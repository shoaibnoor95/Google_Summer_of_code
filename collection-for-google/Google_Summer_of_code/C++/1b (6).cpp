#include<iostream>
#include<string>
using namespace std;
void prod(void);
main()
{
	string x;
	do
	{
		 prod();
		cout<<"\nYou want to calculate more (type yes or no)"<<endl;
		cin>>x;
	}while (x=="yes");
	
}
void prod(void)
{
	int a,b,c;
	cout<<"Enter a value\n";
	cin>>a;
	cout<<"Enter another value\n";
	cin>>b;
	c=a*b;
	c=c*2;
	cout<<endl<<"The value found after calculation is "<<c;
	
}
