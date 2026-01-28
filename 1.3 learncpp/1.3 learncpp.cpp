#include <iostream>

int main()
{
	int x;   // Declare an integer variable named x
	double width; // Declare a double variable named width
	int a, b; // Declare two integer variables named a and b with comma separation
	// int a, int b; // wrong (compiler error)
	/*int a, double b; // wrong (compiler error)

    int a; double b; // correct (but not recommended)

     // correct and recommended (easier to read)
     int a;
     double b;*/
	return 0;
}

/*In C++, we use objects to access memory. A named object is called a variable. Each variable has an identifier, a type, and a value (and some other attributes that aren’t relevant here). A variable’s type is used to determine how the value in memory should be interpreted.

Variables are actually created at runtime, when memory is allocated for their use.*/