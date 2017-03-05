#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
	struct book
	{
		char name[10];
		int pages;
		float price;
	}b1,b2,b3,b4;
	cout<<"Enter the name pages and price of first book  "<<endl;
	cin>>b1.name>>b1.pages>>b1.price;
	cout<<"Enter the name pages and price of second book  "<<endl;
	cin>>b2.name>>b2.pages>>b2.price;
	cout<<"Enter the name pages and price of third book  "<<endl;
	cin>>b3.name>>b3.pages>>b3.price;
	cout<<"The name page and price of first book is "<<b1.name<<endl<<b1.pages<<endl<<b1.price;
	cout<<"The name page and price of Second book is "<<b2.name<<endl<<b2.pages<<endl<<b2.price;
	cout<<"The name page and price of Third book is "<<b3.name<<endl<<b3.pages<<endl<<b3.price;
}
