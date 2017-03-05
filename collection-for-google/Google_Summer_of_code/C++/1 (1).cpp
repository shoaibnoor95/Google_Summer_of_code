#include<iostream>
using namespace std;
main()
{
	int noc=0,nob=0,nol=0,nop=0;
	char ch;
	FILE *fp;
	fp=fopen("Untitled1.cpp","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		
		noc++;
		
		if(ch=='\t')
		nop++;
		
		if(ch=='\n')
		nol++;
		
		if(ch==' ')
		nob++;
		
	}
	fclose(fp);
	cout<<"Number of characters are found to be \n"<<noc;
	cout<<"\nNumber of blanks are found to be \n"<<nob;
	cout<<"\nNumber of tabs are found to be \n"<<nop;
	cout<<"\nNumber of lines are found to be \n"<<nol;
}
