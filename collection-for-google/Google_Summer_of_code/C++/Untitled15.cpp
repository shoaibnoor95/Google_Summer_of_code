#include<iostream>
#include<string>
using namespace std;

struct book
{
	string name;
	float rupee;
	int page;
	
};
void display (book,int);
main()
{
	int size=10;
	book b[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter Name of "<<i+1<<" book"<<endl;
		cin>>b[i].name;
		cout<<"Enter Price of "<<i+1<<" book"<<endl;
		cin>>b[i].rupee;
		cout<<"Enter Pages of "<<i+1<<" book"<<endl;
		cin>>b[i].page;
	}
	for(int i=0;i<10;i++)
	{
		display (book b,size);
	
	}
	cout<<"Thats all the structure is about \n";
	
}
void display(book c ,int size)
{
	cout<<c.name<<c.page<<c.rupee;
}
