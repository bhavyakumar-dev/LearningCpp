#include <iostream>

/*The iostream library contains a few prede  fined variables for us to use.One of the most useful is std::cout, which allows us to send data to the console to be printed as text.cout stands for “character output”.*/

 // for std::cout

int main()
{
    std::cout << "Hello" << " world!\n";
    
    int x{ 5 };
    std::cout << "x is equal to: " << x <<  "\n";

    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;

    
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
    return 0;
}
