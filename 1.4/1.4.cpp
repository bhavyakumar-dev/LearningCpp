#include <iostream>

int main()
{
	
	int width{5};
	width = 5; // declare width variable and assign value

	std::cout << width; // print width variable

	width = 7;
	std::cout << width;

	int width1 ( 5 );
	std::cout << width1;

	// An integer can only hold non-fractional values.
// Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
// Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

	//int w1{ 4.5 }; // compile error: list-init does not allow narrowing conversion

	int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
	int w3(4.5);   // compiles: w3 direct-initialized to value 4
	int width11{}; // value-initialization / zero-initialization to value 0

	return 0;
}