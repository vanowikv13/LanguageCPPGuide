# Day 3 - Some the most useful concept of c++ 11

## The full article contain also example in main.cpp

## I. nullptr
	The nullptr keyword represents a null pointer value

## Rules
	1. We now shouldn't use previous NULL to initialize pointer
	2. You cannot take adres of nullptr so it's prvalue
	3. This is build especially to use it for pointer

## II. Initializer_list
	Initializes an object from braced-init-list

### The most important information
	1. Every object have to be this same type
	2. Object by this value is automatically constructed by compiler from initialization list declaration
	3. Whenever you use this type you should by other data you shall still include it to libraries
	4. The lifetime depends of how you use it's object but usually it's short
	5. You can make constructor used this type by argument and it is used in first place than other one
	6. It can be used whatever data have to be Send like array, vector etc.

	Method of initializer_list object:
		* size(); 
		* begin();
		* end();



## III. for each
	Pospolity to write really easily loop that make something for each element
### Ideas
	1. It's really hard to write some rules just check examples in main.cpp
	2. Normal keyword for (type argument: array) {} (in array place can be vector, tab[], etc.)
	3. In type place can the best one is auto keyword



### More information and links I use:
	http://en.cppreference.com/w/cpp/language/list_initialization
	https://www.youtube.com/watch?v=U6mgsPqV32A
	https://stackoverflow.com/questions/1282295/what-exactly-is-nullptr