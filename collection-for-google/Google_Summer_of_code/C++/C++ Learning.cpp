#include<iostream>
#include<string>
using namespace std;
int ar(int ar2[][4],int size,string sr[][3], int sab);
main()
{
	string sr[3][3];
	int ar2[4][4],tot[20];
	for(int i=0 ; i<4; i++)
	{
		for(int j=0 ; j<4; j++)
		{
			cout<<"Enter any number\n";
			cin>>ar2[i][j];
		}
	}
	for(int i=0 ; i<3; i++)
	{
		for(int j=0 ; j<3; j++)
		{
			cout<<"Enter any thing\n";
			cin>>sr[i][j];
		}
	}
	for(int i=0;i<19;i++)
	{
	
	tot[i]=ar(ar2,4,sr,3);
	cout<<tot[i];
}
}

int ar(int ar[][4],int size,string sr[][3],int abc)
{
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<sr[i][j];
			
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
		
			return ar[i][j];
			
		}
	}
	
}
