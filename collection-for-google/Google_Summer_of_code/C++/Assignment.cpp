#include<iostream>
#include<string>
using namespace std;
float tempa(float);
float tempb(float);
float curra(float);
float currb(float);
float weia(float);
float weib(float);



main()
{
	float a=0,b=0,c;
	char e=2,y;
	string x,m;
	do
	{
	
		cout<<e<<"Welcome to Noor`s total Converter "<<e<<endl<<endl;
		cout<<"\t\t(please use lower case letters)"<<endl;
		cout<<"For conversion of currency Type currency and press enter"<<endl;
		cout<<"For conversion of Temperature Type temperature and press enter"<<endl;
		cout<<"For conversion of Weight Type weight and press enter"<<endl;
		cin>>x;
		if(x=="currency")
		{
			cout<<"For conversion of US Dollar(s) into Pakistani Rupee(s) type 'd' and press enter"<<endl;
			cout<<"For conversion of Pakistani Rupee(s) into US Dollar(s) type 'p' and press enter"<<endl;
			cin>>y;
			switch(y)
			{
				case'd':
				cout<<"Enter your ammount of US Dollar(s)"<<endl;
				cin>>a;
				b=curra(a);
				cout<<a<<" Dollar(s)= "<<b<<" Rupee(s)";
				break;
								
				case 'p':
				cout<<"Enter your ammount of PKR Rupee(s)"<<endl;
				cin>>a;
				b=currb(a);
				cout<<a<<" Rupee(s) = "<<b<<" Dollar(s)";	
				break;
				default:
				cout<<"\nYou have type a wrong character please type again\n";
				main();
				break;	
	}
			}
			else if(x=="temperature")
			{
				cout<<"For conversion  From Farenhiet to Celcius type 'c' and press enter"<<endl;
				cout<<"For conversion  From Celcius to Farenhiet type 'f' and press enter"<<endl;
				cin>>y;
				switch(y)
				{
					case 'c':
					cout<<"Enter the temperature"<<endl;
					cin>>a;
					b=tempa(a);
					cout<<a<<" Farenhiet = "<<b<<" Celcius"<<endl;
					break;
					case 'f':
					cout<<"Enter the temperature"<<endl;
					cin>>a;
					b=tempb(a);
					cout<<a<<" Celcius = "<<b<<" Farenhiet"<<endl;
					break;
					default:
					cout<<"\nYou have entered an invalid character\n";
					main();
					break;
				}
			}
			else if(x=="weight")
			{
				cout<<"For conversion From Pound(s) to kilogram(s) type 'k' and press enter"<<endl;
				cout<<"For conversion From Kilogram(s) to Pound(s) type 'p' and press enter"<<endl;
				cin>>y;
				switch(y)
				{
					case 'k':
					cout<<"Enter the Weight"<<endl;
					cin>>a;
					b=tempa(a);
					cout<<a<<" Pound(s) = "<<b<<" Kilogram(s)"<<endl;
					break;
					case 'p':
					cout<<"Enter the weight"<<endl;
					cin>>a;
					b=tempb(a);
					cout<<a<<" Kilogram(s) = "<<b<<" Pound(s)"<<endl;
					
					break;
					default:
					cout<<"\nYou have entered an invalid character\n";
					main();
					break;
				}
			}
			else
		{
				
			cout<<"You have entered an invalid character please choose again"<<endl;
			main();
	}
	
	cout<<endl<<"Want to do more conversions type yes\nIf you want to quit type no"<<endl;
		cin>>m;
		}while(m=="yes");
		}

	
	float curra(float q)
{
	float p;
	p=q*101.2;
	return p;
	
}
float currb(float q)
{
	float p;
	p=q/101.2;
	return p;
}
float tempa(float q)
{
	float p;
	p=(q-32)*5/9;
	return p;
}
float tempb(float q)
{
	float p;
	p=(q+32)*9/5;
	return p;
}
float weia(float q)
{
	float p;
	p=q*0.453;
	return p;
}
float weib(float q)
{
	float p;
	p=q*2.2;
	return p;
}
