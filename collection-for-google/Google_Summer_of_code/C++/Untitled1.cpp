#include<iostream>
using namespace std;
int check(int a[][4], int n);
main()
{
	int ar[4][4],s;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
		cout<<"Enter any Number"<<endl;
		cin>>ar[i][j];
		}
		}
		s=check(ar,4);
		cout<<s;
		
		
}
int check(int a[][4],int b)
{
	int ret,c;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
		ret=a[i][j];
		return ret;
		}
	}
	
	return c;
}
