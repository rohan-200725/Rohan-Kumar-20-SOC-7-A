#include<iostream>
using namespace std;
	class Calculator
	{
	public:
 	 int subtract( int a, int b)
	{
	return a-b;
	}
	int subtract( int a, int b,int c)
	{
	return a-b-c;
	}
};
int main()
{
Calculator c;
cout<<"the subtraction 1 is:"<<c.subtract(25,22)<<endl;
cout<<"the subtraction 2 is:"<<c.subtract(55,25,12);
return 0;
}
