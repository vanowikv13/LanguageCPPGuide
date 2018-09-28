# Pointer to const data, constant pointer and constant pointer to const data

### Pointer to const data

Pointer to const data is pointer that treat data that is directed for as a const. So we can't change value of it although data is not constant. Besides it's possible to initialize non-constant pointer with constant pointer without convert type.

#### Structure

    const datatype * name;

#### Example with const data
```cpp
const int x = 13; //const data

//int * ptr = &x; //compile error: cannot convert int* to const int*

//const int * pointer to const int data
const int * ptr = &x;
//*ptr = 12; //compile error: you cannot assign to a variable that is const

const y = -12; //new const data

//we can also direct this pointer from one to another object (whit this same type)
ptr = &y;
```

#### Example with non const data and const data
```cpp
//our data is not constant
char letter = 'a';

//but here we treat it as a const
const char * ptr = &letter;
//if we want to use it with non constant pointer in this case it's possible
char * nonConstPtr = &letter;
//*ptr = 'b'; //compile error: you cannot assign to a variable that is const

//but we can do it with non constant pointer
*nonConstPtr = 'b'; //letter = 'b';

char number = '3';
//here we can direct our pointer from one data to another (whit this same data type)
ptr = &number;
const char sign = '$'; //our data is constant

//moving pointer is in this case is possible from non-const to const one
//in other hand we have to use convert type
ptr = &sign;
```

### Const pointer

In const pointer we can't change direction of pointer, but we can change data that pointer is direct to. It's also important to define pointer instead of only declare it, because we will get error. Const pointer can't be directed to const data because this pointer give possibility to change data that is directed to.

#### Structure
    dataType * const name = pointerToData;

#### Example
```cpp
//char * const ptr; //error: 'ptr': 'const' object must be initialized if not 'extern'

char sign = '#'; //char variable

//definition of const pointer
char * const ptr = &sign;

char number = '1'; //char variable

//ptr = &number; //error: 'ptr': you cannont assign to a variable that is const

//with const pointer we can change data inside what is directed pointer to
*ptr = 'b';//sign = 'b'

const int favorite = 12;//const data

//int * const favPoint = &favorite;
//error: 'initializing': cannot convert from 'const int *' to 'int *'
//note: Conversion loses qualifiers
```

### Const pointer to const data
The third option is a combination of const pointer and pointer to constant data.

    const pointer + pointer to constant data = const pointer to constant data

#### Structure

    const dataType * const name = pointerToConstObject;

#### Rules:
1) We can't only declare pointer we have to define him from the beginning
2) We can't change value of the pointer that he is directed for
3) We can't move pointer to other data
4) We can assign to pointer pointer of non constant data but it will be treat as constant data
5) If we will use const pointer to const data and we direct this pointer to non constant data and we want latter move it to normal pointer from const pointer to const data we will get an error.

#### Example
```cpp
const double data = 1.111;

//const pointer to const data
const double * const dptr = &data; //1)

//*dptr = 123.3; //2)
//error: 'dptr': you cannot assign to a variable that is const

const double constNum = 123.321;

//dptr = &constNum; //3)
//error: 'dptr': you cannot assign to a variable that is const

double num = 33333.3333;

const double * const dptr2 = &num; //4)

//double nonConstPtr = dptr2; //5)
//error: 'initializing': cannot convert from 'const double *const ' to 'double *'

```

### Summary
At the end I don't know exactly what to say if you should use it or not I think it's good to know it but you will not really often get something from it and it's really good to know that with convert type you can change all of this rules and transfer one pointer to another and even change value of pointer to const data and many others.

Thank You :) + - 13