
# CONSOLE APPLICATION : Day 2 - const vs constexpr

## CONSTEXPR in c++ language
 constexpr - is sometimes used at compile-time and sometimes at run-time

### 1. A constexpr object must satisfy the following requirements:
 1. Type of object must be [LiteralType](http://en.cppreference.com/w/cpp/concept/LiteralType)
 2. It must be immediately initialized
 3. Full-expresion of its initialization must be a const expression
 4. It's can be static

### 2. A constexpr function must satisfy the following requirements
 1. Its can't be virtual
 2. Its return type must be [LiteralType](http://en.cppreference.com/w/cpp/concept/LiteralType)
 3. Each of its parametrs must be [LiteralType](http://en.cppreference.com/w/cpp/concept/LiteralType)
 4. There exists at least one set of argument values such that an invocation of the function could be an evaluated subexpression of a core constant expression (for constructors, use in a constant initializer is sufficient) (since C++14). No diagnostic is required for a violation of this bullet.
 5. The body function can't declare the variable or define new type ([more information](http://en.cppreference.com/w/cpp/language/constexpr))

### 3. A constepr constructor must satisfy the following requirements
 1. Each arguments and parametrs must be [LiteralType](http://en.cppreference.com/w/cpp/concept/LiteralType)
 2. The class must have no virtual base classes
 3. The constructor must can't have function-try-block
 4. Sometimes function shoudl be inline

### 4. Notes Because the noexcept operator always return true for constant operation and this can be used for check if operation go ok
 1. A constexpr bool b1 = noexcept(functionx()); this return flse if operation go wrong or true if operation pass



## CONST in c++ language
const - is always used at compile-time

### 1. A const object must satusfy the following requiements:
  1. it's a compile time or run time
  2. Must be initializer in declaration
  3. it Can't be modificate in normal way(only for converion type)
  4. it's can be initialize by constexpr function but it's  a compile time
  5. Use const when you want object and this object won't change

### 2. A const function or must sarisft the following requirements
 1. Can't be use for static function
 2. Can't modify the data in function

### 3. A comst in own data type
 1. Data in const object must be initialize in constructor
 2. Function can use const object only with const parametr after function
 3. We can't cast const function for normal object
 4. Object in const function can't be modify
 5. Function can't be at the same time const and static




 lninks:
 https://stackoverflow.com/questions/14116003/difference-between-constexpr-and-const
 https://pl.wikipedia.org/wiki/C%2B%2B11
 http://en.cppreference.com/w/cpp/language/constexpr