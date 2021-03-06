#include "stdafx.h" //Only for Visual Studio. If you are not using VS just delete this line
#include <iostream>
#include <string>

//enum class usage (ecu)
namespace ecu {
	//typical enum definition
	enum class enum_definition {object1, object2, object3};

	//here we define what type we would like to use with this enum class
	enum class with_underlaying_def { x = 12, c, d};
	
	///TO DELTE 
	//default underlying definition int (for this where type is hide into values, but not set by programmer)
	enum class defualt_underlaying {x = 1, b = 132}; 

	//declaration object of enum
	defualt_underlaying t = defualt_underlaying::x;
	auto r = defualt_underlaying::b;
	//t = defualt_underlaying::x; //error - you can redeclarate enum object.

	enum class X {a = 1, b = 3};
	enum class Y :int {a = 3, b =1};

	X fri = X::a; //good one
	//Y fir = X::b; //wrong, X::b  is not type Y, cannont be converted to Y
	//int x1 = X::a //wrong, X::b in not int type and cannot be converted to int
	//int x2 = Y::a; //a value of Y cannont initialize entity of type int even if they are int logicly

	//bool b1 = X::a == 2;//Cannot be compared to int
	//bool b2 = X::a < Y::a //X::a and Y::a are diferent type
	bool b3 = X::a <= X::b; //they are the same type you can compare their value

	//enum definition
	enum A {a1 = 1, b1= 3};
	enum B {a2 = 13, b2 = 11};

	int xd = A::a1 - a2; //ok, both type can be converted to int
	int xd2 = B::a2 - b2 + a1; //ok, both type can be converted to int
	//int xd3 = X::a + A::a1; //wrong, both type are diferent

	///Safer bool type !!!usage in the main functiono
	enum class conditionX : bool { FALSE, TRUE };

	///other things that strong enum can be used for
	enum class status : bool {On, Off}; //status for device
	enum class theme : bool {light, dark}; //theme in software

	///Froward declarated
	enum class Color_code : char; // (forward) declaration
	void foobar(Color_code* p);
	enum class Color_code : char {red, yellow, green, blue}; //definition

	enum class graphic {VECTOR, PIXEL};

	enum class letter : char {a = 'a', b = 'b', };
}

///enum class as bool (argument as bool object)
void checking_condition(ecu::conditionX obj1, ecu::conditionX obj2) {
	if (obj1 == obj2)
		std::cout << "Both values is true" << std::endl;
	else
		std::cout << "Values are different" << std::endl;
}

int main()
{
	///How to use enum class as bool object
	ecu::conditionX a;
	ecu::conditionX b = ecu::conditionX::FALSE;
	a = ecu::conditionX::TRUE;
	checking_condition(a, b);

	///You can also involve switch
	ecu::graphic circle = ecu::graphic::VECTOR;
	switch (circle) {
		case ecu::graphic::VECTOR:
			std::cout << "Here is a vector graphic " << std::endl;
			break;
		case ecu::graphic::PIXEL:
			std::cout << "Here we have pixel graphic " << std::endl;
			break;
	
	}

    return 0;
}
