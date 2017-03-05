#include<iostream>
using namespace std;
void display(void);
main()
{
	for(int i=1;i<=3;i++)
	{
		cout<<"Calling function "<<i<<" times"<<endl;
		display();
		
	}
}

void display()
{
	for(int j=1;j<=5;j++)
	{
	cout<<"Shoaib Noor"<<endl;
}
}
