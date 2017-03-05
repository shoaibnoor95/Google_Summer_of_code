#include<iostream>
using namespace std;
int prod(int,int,int);
int sum(int,int,int);
main()
{
	int a,b,c,d;
	string x;
	cout<<"Enter any value";
	cin>>a;
	cout<<"Enter any value";
	cin>>d;
	cout<<"Enter any value";
	cin>>c;
	cout<<"If you want to add type add\nIf you want to product them type product ";
	cin>>x;
	if(x=="add")
	{
		d=sum(a,b,c);
	}
	else if(x=="product")
	
	d=prod(a,b,c);
	
}
	int sum(int a, int b, int c)
	{
		int d;
		d=a+b+c;
		return d;
		
	}
	int prod(int a, int b, int c)
	{
		int d;
		d=a*b*c;
		return d;
		
	}

