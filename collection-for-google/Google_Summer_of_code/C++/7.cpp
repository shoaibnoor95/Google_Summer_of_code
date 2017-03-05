#include<iostream>
#include<string>
using namespace std;

	


main()
{
	struct shoaib
{
	int a;
	float b;
	string c;
	
};

	struct shoaib x={100,10.5,"Shoaib"};
	struct shoaib *ptr;
	ptr=&x;

	cout<<ptr->a<<ptr->b<<ptr->c;
}
