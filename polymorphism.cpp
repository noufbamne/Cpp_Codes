// Compile-time Polymorphism
#include <iostream>
using namespace std;

class Function_Overloading {
public:
	// Function with 1 int parameter
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}

	// Function with same name but
	// 1 double parameter
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}

	// Function with same name and
	// 2 int parameters
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y
			<< endl;
	}
};

// Driver code
int main()
{
	Function_Overloading obj;

	// Function being called depends
	// on the parameters passed
	// func() is called with int value
	obj.func(7);

	// func() is called with double value
	obj.func(9.132);

	// func() is called with 2 int values
	obj.func(85, 64);
	return 0;
}