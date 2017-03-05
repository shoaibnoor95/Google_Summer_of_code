/*#include<iostream>
using namespace std;
 main()
{
	double x;
	{
		double n;
		n=2;
		x=n*n*n;
	}
	cout<<x;
}*/
#include<iostream>
using namespace std;
inline double cube(double x) {return x*x*x;}
main()
{
double a,b;
double c=13.0;
a=cube(5.0);
b=cube(4.5+7.5);
cout<<a<<endl;
cout<<b;	
}

