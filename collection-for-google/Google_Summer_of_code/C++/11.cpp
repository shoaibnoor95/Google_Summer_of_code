

#include<iostream>
using namespace std;
main()
{
struct emp
{
	int a;
	char c;
	float s;
};

struct emp e;
cout<<&e.a<<&e.c<<&e.s;
}
