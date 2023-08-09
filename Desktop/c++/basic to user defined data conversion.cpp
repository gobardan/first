#include<iostream>
using namespace std;
class test
{
	int a,b;
	public:
		test ()
		{
		}
		test(int x)
	{
	
	a=x;
	b=x;
	
}
void display ()
{
	cout<<a<<" "<<b<<endl;

	}
};
int main()
{
	test t1;
	int c=5;
	t1=c;  //basic to user defined conversion
	t1.display();
	
}
