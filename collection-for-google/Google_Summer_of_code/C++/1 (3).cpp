#include<iostream>
#include<string>
using namespace std;
	


main()
{

struct book
	{
		long int acn;
		string name;
		double bal;
		
	};
	struct book rc[3];	
	
	for(int i=0;i<2;i++)
	{
	
		cout<<"Enter name of customer "<<i+1<<endl;
		getline(cin,rc[i].name);
		cout<<"Enter Account number and Account balance respectively ";
		cin>>rc[i].acn;
		cin>>rc[i].bal;	
	}
	for(int i=0;i<2;i++)
	{
		if(rc[i].bal<100)
		{
			cout<<rc[i].name<<" \nHas low balence ";
		} 
	}
	
}
