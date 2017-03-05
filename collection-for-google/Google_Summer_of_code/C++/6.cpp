#include<iostream>


using namespace std;

struct virus
{
	char signature[25];
	char status[50];
	int size;
	
};
struct virus v[2]={"Yeanky","Deadly",1010,
		"\nShoaib","Noor",1995
		};
		main()
		{
			int i;
			for(i=0;i<=1;i++)
			{
				cout<<v[i].signature<<v[i].status<<v[i].size;
			}
		}
