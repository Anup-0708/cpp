#include<iostream>
using namespace std;

class Function_over
{
	public:
	void calculate(int side)
	{
		cout<<"Area of squre is: "<<side*side<<endl;
	}
	void calculate(int side,int side1)
	{
		cout<<"Area of rectangle is: "<<side*side1<<endl;
	}
	void calculate(double hight,double width)
	{
		cout<<"Area of triangle is: "<<0.5*hight*width<<endl;
	}
	void calculate(double radius)
	{
		cout<<"Area of circle is: "<<3.14*radius<<endl;
	}
};
int main()
{
	Function_over obj;
	
	obj.calculate(12);
	obj.calculate(12,13);
	obj.calculate(12.3,2.5);
	obj.calculate(12.4);
	return 0;
}
