#include<iostream>
#include<string>
using namespace std;
main()
{
//	string a;
	FILE *fp;
	char ch;
	fp=fopen("Untitled1.cpp","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		cout<<ch;
		
	}
	fclose(fp);
	
	cout<<"Enter your name \n";
	//cin>>a;
}
