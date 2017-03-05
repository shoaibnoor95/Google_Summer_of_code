#include<iostream>
using namespace std;
main()
{
	FILE *fp;
	char ch;
	fp=fopen("Untitled1.cpp","r");
	if(fp==NULL)
	{
		puts("Cannot Open the file ");
		
	}
	else
	while(1)
	{
	
	ch=fgetc(fp);
	if(ch==EOF)
	break;
	
	cout<<ch;
	}
	fclose(fp);
	
}
