# Day 4
       Today I want to show you something interesting that is maybe not really common but for me it's really useful.

## The full article contain also real example with c++ code in main.cpp


### Chapters
       I. Conditional ? : operator
       II. Function pointer



### I) Conditional ? : operator
       Reason Why you should use that is because it's sometimes much faster code than without that.
       
- [ ] STRUCTURE
       
	   1. In typical way:
```cpp
       if(condition) {
          var = x;
       } else {
          var = y;
       }
       2. Conditional ? : operator:
       var = condition ? x : y;
```

- [ ] EXAMPLE (remember that before you will use this code first declar x variable as int)
```cpp       
	   1. In typical way:
       if(2 > 3)
              x = 123;
       else
              x = 321;
       2. Conditional ? : operator:
       x = (2 > 3) ? 123 : 321;
```

### So I think Why should you use conditional ? : operator?
       1. It's faster
       2. It's shorter


## II) Function Pointer
### Funtion Pointer like name says it's pointer to function so it's some variable when we can store pointer to function and later use this function.

### How use it ?
       
	   Form how to create function pointer:
              return_type_function(*pointer_name)(arguments ...);
       
	   Example:
```cpp
              1. void(*pointer)(); // return void and don't have any argument.
              2. int(*pointer2)(int,int); //return int and have two int argument
              3. string(*pointer3)(char *tab, int); //return string and have arguments pointer to char and int
              4. void(*writeData)(int,string, string(*function_with_data)(int));
              //This one above return void and have int, string and pointer to function argument.

			  ///what now ? I think we can create some function for the pointer and send it.
              
			  //we create function for a pointer
              void sayHello() {
                     std::cout << "Hello World " << std::endl;
              }
              
			  pointer = &sayHello; //we put into our pointer adress for the function
              If you want to use function from pointer just use it as normal function.
              pointer();
```             
			  
			  
			  
### For more example and other situation go to main.cpp