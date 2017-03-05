#include<iostream>
using namespace std;
main()
{
	FILE *fp;
	char s[474];
	fp=fopen("Untitled4.cpp","r");
	if(fp==NULL)
	{
		puts("Cannot Open the file ");
	
	}
	while(fgets(s,473,fp)!=NULL)
	{
		cout<<s;
		
	}
	fclose(fp);
}
