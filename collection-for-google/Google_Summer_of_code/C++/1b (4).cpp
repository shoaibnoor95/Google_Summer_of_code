#include<iostream>
#include<string>
using namespace std;
string check(int);
main()
{
	int a;
	string s;
	cout<<"Enter any number";
	cin>>a;
	s=check(a);
	cout<<s;
}
string check(int b)
{
	if(b%2==0)
	{
		return "Even";
	}
	else
	return "odd";
}
