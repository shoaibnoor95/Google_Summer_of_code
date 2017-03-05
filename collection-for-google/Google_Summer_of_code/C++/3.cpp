#include<iostream>
using namespace std;
struct Distance
	{
	int ifeet;
	float finches;
	void setfeet(int x)
	{
		private:
		ifeet=x;
	 } 
	 int getfeet()
	 {
	 	return ifeet;
	 }
	 void setinches(float y)
	 {
	 	ifeet=y;
	 }
	 int getinches()
	 {
	 	return ifeet;
	 }
};
int main()
{
	Distance d1,d2;
	d1.setfeet(2);
	d1.setinches(3.2);
	d2.setinches(3);
	d2.setinches(4.5);
	cout<<d1.getfeet()<<" "<<d1.getinches()<<endl;
	cout<<d2.getfeet()<<" "<<d2.getinches()<<endl;
	system("pause");
}

