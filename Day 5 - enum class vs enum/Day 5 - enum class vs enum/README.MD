# Day 5 - enum class vs enum

### Description :+1:
This article is about why it's better to use strong enum (class) instead of enum and how to use it?
## [The full article contain also real example with c++ code in **main.cpp**](https://github.com/vanowikv13/LanguageCPPGuide/blob/master/Day%205%20-%20enum%20class%20vs%20enum/Day%205%20-%20enum%20class%20vs%20enum/main.cpp)

### Chapters
1. About enum types
2. Syntax of enumeration and rules
3. New friend: **strong enum (class)**
4. When use it? : Good usage patterns (enum class)
5. Example where it's used

### 1. About enum types
About enum type - An enumeration is distinct type whose value is restricted to a range of values. It's contain not changeable data, with different names. The enum type usually is used to create unique status for some part of application like: 
```cpp
enum device {On, Off}
```
In this example it's visible that there is some device and this device can be set on 'On' or 'Off'. The enum also is like struct with static constant in enum case members are not in struct scope but in enclosing scope. So it's means that members of enum are visible outside the enum without any prefix. You cannot initialize or assign to an enum variable and any value other than one from an enumerator or variable of the same enumeration type. Type of values in enum or enum class is recognized usually by initialization of value or programmer can do it by it own using **underlying type** of the enumeration it's one of the optional things. With **underlying type** You have oportunity to mkae forward declaration.

### 2. Syntax of enumeration and rules
**The enumeration in c++ has following syntax:**
enum-key attr(optional) identifier(optional) enum-base(optional) { enumerator-list(optional) }; 
enum-key attr(optional) nested-name-specifier(optional) identifier enum-base(optional) ;

**Steps list to make enumeration:**
1. Start from enum or enum class in first place.
2. Attributes - optional sentence of any numbers of [attributes](https://en.cppreference.com/w/cpp/language/attributes)
3. Identifier - the name of enumeration that is being decelerated. It's used to make the most of case re-declaration of some enum.
4. enum-base - colon (:), followed by a type-specifier-seq that names an 5. integral type (if it is cv-qualified, qualifications are ignored) that will serve as the fixed underlying type for this enumeration type
6. enumerator-list - list of enumeration definition.

**Basic enumeration:**
```cpp
enum class animals {Cow, Dog, Cat, Monkey}; //enum definition with 4 object
enum class Colors : int {Blue, Red, Black}; //name: Color, 3 parameters, integral type int
enum numbers {one, two, three}; //enum definition with three object //OK
enum days {one, two, three, four, five, six, seven}; //wrong !!!!
//using normal enum you can't have at the same place like one and one.
```

### 3. New friend: **strong enum (class)**
The new enums are "enum class" because they combine aspects of traditional enumerations (names values) with aspects of classes (scoped members and absence of conversions). How it's looks and about declaration and semantics. You can't compare, add and other things object from other enum class or even from all other object even basic types. The scoped enum class solved most of the limitations incurred by regular enums: complete type safety, well-defined underlying type, scope issues, and forward declaration.

You also get type safety because this type disallow all conversion to other type and You can't make any operation like assignment, comparison  and adding.
```cpp
enum class AnimalsYears : int {Cat = 4, Mouse = 1, Dog = 8};
//If in the above will be enum not enum class this conversion below will be ok.
int  x = AnimalsYears::Cat; //wrong, can't convert AnimalsYears to int
enum class WhatAnimalsIHave {Cat, Dog, Hamster};
WhatAnimalsIHave v = WhatAnimalsIHave::Cat; //ok
v = AnimalsYear::Cat; //wrong, cant' convert AnimalsYears to WhatAnimalsIHave
bool itsEqual = (AnimalsYears::Cat == AnimalsYears::Dog); //ok, result is true or false, not conversion
```

Any enum with fixed underlying type can be forward declared so it's means that you can make it declare few time with different values in different place in program. In scoped enum underlying type is by default int if you decide to don't set it.
```cpp
//enum-type name : underlying type { enumerator-list};
enum class  BOOL : bool; //can be forward declared
enum class BOOK; //this can't be forward declared
void function(BOOL b); //function declaration
enum class BOOL : bool {TRUE, FALSE}; //froward declared

void function(BOOL b) {
     if(b == BOOL::TRUE)
         std::cout << "true" << std::endl;
     else
         std::cout << "false" << std::endl;
}
```
In enum class you got the value first from prefix name of class than :: and than name of value.
It's different than in normal enum because there you can't have this same name of values in two enums in this same scope. Example:
```cpp
enum dayOfWork : int {Monday, Friday}; //ok
enum dayInWeek : int {Monday, Thursday, Wednesday, Thursday, Friday, Saturday, Sunday};
//code above is wrong because you can't have the same name of value in one scope
```
In enum class it's possible because values in enum class they are in their class scope.
```cpp
enum class dayOfWork : int {Monday, Friday}; //ok
enum class Week: int {Monday, Thursday, Wednesday, Thursday, Friday, Saturday, Sunday}; //ok
```

### 4. When use it? : Good usage patterns (enum class)
1. Usually it's used to repentant some states, type, kinds, condition. The easier
it's usually unique collection of elements with not particular functionality.
This is used because for sure it give you a bit of safety.

2.  You can create safe bool type by enum. Why? Because bool type is dangerous in c++
because of it possibility to convert bool object to another type like int etc.
So for making it better you can make your own bool type using enum class:
enum class conditionX : bool {FALSE, true}; //like bool type but more safer

### 5. Example where it's used
**In the standard library, enum classes are used for:**
1. Mapping systems specific error codes: In <system_error>: enum class errc;
2. Pointer safety indicators: In <memory>: enum class pointer_safety { relaxed, preferred, strict };
3. I/O stream errors: In <iosfwd>: enum class io_errc { stream = 1 };
4. Asynchronous communications error handling: In <future>: enum class future_errc { broken_promise, future_already_retrieved, promise_already_satisfied };


## [The full article contain also real example with c++ code in **main.cpp**](https://github.com/vanowikv13/LanguageCPPGuide/blob/master/Day%205%20-%20enum%20class%20vs%20enum/Day%205%20-%20enum%20class%20vs%20enum/main.cpp)

#### Links:
1. [Stackoverflow](https://stackoverflow.com/questions/12581064/enum-vs-strongly-typed-enum)
2. [IBM](https://www.ibm.com/developerworks/rational/library/scoped-enums/index.html)
3. [en.cppreference](https://en.cppreference.com/w/cpp/language/enum)