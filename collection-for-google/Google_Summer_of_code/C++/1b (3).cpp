#include<iostream>
float sum(float,float);
float prod(float,float);
float dif(float,float);
float div(float,float);

using namespace std;
main()
{
	float a,b,c;
	char e;
	cout<<"Enter a value "<<endl;
	cin>>a;
	cout<<"Enter a value "<<endl;
	cin>>b;
	cout<<"Type s for sum\nType p for product\nType m for difference\nType d for division ";
	cin>>e;
	switch(e)
	{
		case 's':
			c=sum(a,b);
			break;
		case 'p':
			c=prod(a,b);
			break;
		case 'm':
			c=dif(a,b);
			break;
		case 'd':
			c=div(a,b);
			break;	
		default:
			cout<<"wrong input"<<endl;
	}
	cout<<"The value found after conversion is "<<c;
}
float sum(float a, float b)
{
	float c;
	c=a+b;
	return c;
}
float prod(float a, float b)
{
	float c;
	c=a*b;
	return c;
}
float div(float a, float b)
{
	float c;
	c=a/b;
	return c;
}
float dif(float a, float b)
{
	float c;
	c=a-b;
	return c;
}
