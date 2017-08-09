#include "stdafx.h"

constexpr int tabSize() {
	return 12;
}

class constX {
public:
	static constexpr int statConst() {
		int x = 13;
		return 13;
	}

	/*static void d() const {
		;
	}*/

	int mk() const{
		//d = 1; in const function we can't change the value
		return 1;
	}

	int md() {
		return 2;
	}
	//initialize object const in class by function
	constX(int da):d(da),id(tabSize()) {
	}


protected:
	int d;
	const int id;
};


int main()
{
	int some_tab[tabSize()];
	constexpr int size = tabSize();
	//constexpr int size2 = size(); this go wrong
	const int size3 = tabSize();
	tabSize();
	constX x(12);
	x.mk();
	constX::statConst();

	const constX df(1);
	df.mk(); //it's ok
	//df.ml(); //it's wrong because don't have operator const after funciton

    return 0;
}

