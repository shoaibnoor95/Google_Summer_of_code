#include<iostream>
using namespace std;
struct Distance
{
	private:
		int ifeet;
		float finches;
		public:
		void setfeet(int x)
		{
			ifeet=x;
		}
		int getfeet()
		{
			return ifeet;
		}
		void setinches(float y)
		{
			finches=y;
		}
		float getinches()
		{
			return finches;
		}
};
int main()
{
	Distance d1,d2;
	d1.setfeet(2);
	d1.setinches(2.2);
	d2.setfeet(3);
	d2.setinches(3.3);
	d1.feet++;
	cout<<d1.getfeet()<<" "<<d1.getinches()<<endl;
	cout<<d2.getfeet()<<" "<<d2.getinches()<<endl;
	
}
