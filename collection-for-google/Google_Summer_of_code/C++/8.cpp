#include<iostream>
#include<string>

using namespace std;
main()
{
	int i;
	struct record
	{
		string name;
		
		string depart;
		
		int roll;
		
		string course;
		
		string year;	
	};
	struct record a[10];
	for(i=0;i<=9;i++)
	{
		std::cout<<"Enter your name\n";
		std:: getline(cin,a.name);
		std::cout<<"Enter your depart\n";
		std:: getline(cin,a.depart);
		std::cout<<"Enter your course\n";
		std:: getline(cin,a.course);
		std::cout<<"Enter your roll num\n";
		std:: getline(cin,a.course);
		std::cout<<"Enter your name\n";
		std:: getline(cin,a.course);
	};
		for(i=0;i<=9;i++)
		{
			cout<<"Student name\t"<<a.name;
			cout<<"Student depart\t"<<a.course;
			cout<<"Student course\t"<<a.course;
			cout<<"Student roll num\t"<<a.roll;
			cout<<"Student Year of joining\t"<<a.year;
		}
}
