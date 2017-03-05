#include<iostream>
using namespace std;
int prod(int a[3][4], int b[3][4] );

main()
{
	int ar[3][4],c,b[3][4],d;
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<4;j++)
	{
	
	cout<<"Enter"<<i+1<<" value of row "<<j+1<<"of first array"<<endl;	
	cin>>ar[i][j];
	cout<<"Enter"<<i+1<<" value of row "<<j+1<<"of second array"<<endl;	
	cin>>b[i][j];
}
}
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<4;j++)
	{
	c=prod(ar,b);	
	d=d*c;
	}
}


	cout<<"The value after product is found to be "<<d;

	cout<<endl;
	system("pause"); 
	}
int prod(int cr[3][4],int bc[3][4])
{
	int val;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			val=val*cr[i][j]*bc[i][j];
		}
	}
		return val;
}
