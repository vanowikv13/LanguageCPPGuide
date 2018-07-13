# Day 4
### Description
##### Today I will show you something not common in c++ programming, but for me useful.
## !!! The full article contain also real example with c++ code in main.cpp !!!

### Chapters
       I. Conditional ? : operator
       II. Function pointer
### I) Conditional ? : operator
For the a long time ago when people get really big things they understand that the most of action they doing is carry about things they have.
So from that time people create keyword minimalist for something that is small and works well. Latter people start to living with all with this.
Much later people start to put it in software engineering and this is how was created conditional operator that I will show you here.
Conditional operator is shorter and faster part of code than you was written before.
      
- [ ] STRUCTURE
1. In typical way:
```cpp
if(condition)
	variable = x;
else
    variable = y;
```
2. Conditional ? : operator:
```cpp
variable = condition ? x : y;
```
- [ ] EXAMPLE (remember that before you will use this code first declar x variable as int)
1. In typical way:
```cpp
int x;

if(2 > 3)
	x = 123;
else
	x = 321;
```
2. Conditional ? : operator:
```cpp
x = (2 > 3) ? 123 : 321;
```
### If you still don't know why to use it here you have two argument below:
	1. It's faster
	2. It's shorter

## II) Function Pointer
### Funtion Pointer like name says it's pointer to function so it's some variable when we can store pointer to function and later use this function.
##### The most important question why to use it the most time because it's easier to use pointer to function than transport data in other way.
Let's say that you have some object and this object making every day some action(method) and this action is every time different.
So have method action but what will be next? You can realizate this by writing to the action method pointer to function in argument and you
will only send it to the obejct and object will just call it.
### How it's work in code?
      
Here you have typical form how to create pointer to function:
       **return_type_function (*pointer_name)(arguments ...);**
      
Example:
```cpp
void(*pointer)(); // return void and don't have any argument.
int(*pointer2)(int,int); //return int and have two int argument
string(*pointer3)(char *tab, int); //return string and have arguments pointer to char and int
void(*writeData)(int,string, string(*function_with_data)(int));
//This one above return void and have int, string and pointer to function argument.
///what now ? I think we can create some function for the pointer and send it.
             
//we create function for a pointer
void sayHello() {
       std::cout << "Hello World " << std::endl;
}
             
pointer = &sayHello; //we put into our pointer adress for the function
//If you want to use function from pointer just use it as normal function.
pointer();
```            
                      
                      
                      
### For more example and other situation go to main.cpp