#include <iostream>

void function(int x) {
	std::cout << "I'm void function and I have int argument: "<< x << std::endl;
}

int function_1(int x, char t, void(*foox)(int)) {
	std::cout << "I'm int function, I return data, I have also my argument \n";
	std::cout << "I have also three arguments int, char, and pointer to function void(*)(int)" << std::endl << std::endl;
	return x;
}

int main()
{
	void(*foo)(int); // function to pointer
	foo = &function; //initialize pointer with addres to the function
	foo(12); //
	(*foo)(13);

	//pointer to function with one of the argument that is pointer to other function.
	int (*pointer_function_1)(int, char, void(*foox)(int)) = &function_1;

	//here we are puting in one of the argument existing object what is pointer to other function
	pointer_function_1(12, 'a', foo);
	

	///Conditional ? : operator
	int x = 12;

	//Typical way:
	if (11 > x)
		x = 13;
	else
		x = 12;

	//Conditional ? : operator
	x = 11 > x ? 13 : 8;

	std::cin.get();
    return 0;
}

