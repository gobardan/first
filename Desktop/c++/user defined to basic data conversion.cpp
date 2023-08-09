#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void display ()
		{
			cout<<a<<" "<<b<<endl;
			
		}
		operator int ()
		{
			return (a);
		}
};
int main()
{
	test t1;
	t1.getdata(20,30);
	int x;
	x=t1;
	cout<<x<<endl;
	
}
