#include "stdafx.h" //it's for VS :)
#include <vector>
#include <string>
#include <iostream>
#include <initializer_list> //!!!

using namespace std;

//overload name functions but one of them argument is int second one is pointer to int
void f_function(int) { cout << "I'm int argument function"; }
void f_function(int*) {	cout << "I'm pointer int argument function";}

int main()
{

	//nullprt is used esspecially for pointer
	f_function(nullptr); //I'm pointer int argument function;
	//&nullptr; //We can't take adress of that


	//initialize object vector by initializer_list
	vector<int> numbers = { 1,2,3,4 };
	vector<char> letter = { 'a','b','c', 'd', 'e', 'f', 'g', 'h'};
	vector<string> months = { "January", "February", "March", "April", "May" };

	//How to use initializer_list in constructor
	struct Person {
		//constructor with initializer_list
		Person(const initializer_list<string> list) {
			for (auto &x : list)
				names.push_back(x);
			cout << "Ini - Constructor";
		}
		//constructor with string argument
		Person(string name, string surname) {
			names.push_back(name);
			names.push_back(surname);
			cout << "Normal - Constructor";
		}
		vector<string> names;
	};

	//object of structure person
	//we construct object by constructor with initializer_list
	Person p{ "Mariusz", "Nowicki" }; 

	//we have here double initialization
	vector<Person> per = { {"AA", "BB"}, {"first2","second2"} };
	
	vector<int> vec = { 1,2,3,4,5 };

	//for each loop
	for (int i : vec)
		cout << i << endl;
	
	//tab going for each elemnt in array nad interator is int
	int tab[3] = { 1,2,3 }; //initializer_list
	for (int i : tab)
		cout << tab[i] << endl;

	//How to use auto in for each
	for (auto& v : vec)
		v += 1;

	for (auto& v : vec)
		cout << v << endl;

	for (auto &t : { 1,2,3,4,5,6 })
		cout << t << endl;

	system("pause");
    return 0;
}

