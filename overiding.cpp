#include <iostream>
using namespace std;

	class Animal
	{
public:
	void eat()
	{
	cout<<"animal eats:"<<endl;
	}	
	};
class Cat:public Animal
	{
public:
void eat()
	{
	cout<<"cat meow:"<<endl;
	}
};
int main()
{
Animal a;
Cat c;
c.eat();
a.eat();
return 0;
}
