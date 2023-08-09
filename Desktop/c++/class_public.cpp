#include<iostream>
using namespace std;
class area
{
	public:
		int side;	//variable
		int getarea();	//function declaration
};	//end of the class
int area::getarea() 
{
	return side*side;	//body of the function 
}
int main()
{
	area a1;
	cout<<"Enter the length of side: "<<endl;
	cin>>a1.side;
	int i=a1.getarea();
	cout<<"|The are of Square is "<<i<<endl;
}
