#include "stdafx.h" ///FOR VISUAL STUDIO
#include <Windows.h>

struct Animals {
	char * name;
	int age;
	Animals(int ag) :age(ag) {

	}
	virtual void sayHello() = 0;
};

struct Tiger : Animals {
	int fangs;
	Tiger(int ag,int fg):Animals(ag),fangs(fg) {}

	virtual void sayHello() {
		MessageBoxA(nullptr, "Witaj", "Okienko",MB_HELP);
	}
};

int main()
{

	double y = 3.13;
	int x = static_cast<int>(y);
	void* xd = static_cast<void*>(&y);
	double* xf = static_cast<double*>(xd);


	const int cx = 12;
	auto cxd = const_cast<int*>(&cx);
	*cxd = 13;


	Tiger tig(13,12);
	auto dpointer= dynamic_cast<Animals*>(&tig);
	dpointer->age = 13;
	
	const Tiger t(13, 12);
	auto dpoit = dynamic_cast<Animals*>(const_cast<Tiger*>(&t));
	auto dp = dynamic_cast<Tiger*>(dpoit);
	dp->sayHello();
	
	Animals * pointer = new Tiger(12, 32);
	auto po = dynamic_cast<Tiger*>(pointer);
	po->sayHello();

	
	auto rcast = reinterpret_cast<int>(&dp);
	
    return 0;
}

