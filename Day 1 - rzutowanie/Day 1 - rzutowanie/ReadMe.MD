========================================================================
Day 1 - rzutowanie Project Overview
========================================================================

<h1>Theory:<h1>

1)<h3>Static_cast</h3> - It least problematic cast.
To convert normal object like int to float
Static_cast<whatWeWant>(to projection)

2)<h3>const_cast<h3> - To add or remove const
const_cast<whatWeWant>(wariablenpconst) = x;
Const_cast<const whatWeWant>(wariableNormal);
Return reference or pointer

3)<h3>dynamic_cast<h3> - Is for handling polymorphic,
we can to another class type if it's possible
(a polymorphic type has at least one 
virtual function, declared or inherited)
you can cast sideways or even up another chain.
Dynamic_cast will sick out the desire object 
and return it if possible if it can't it will
return nullptr or throw std::bad_cast
It also can only go through public inheritance
return reference of pointer

static_cast<Animals*>(&tigerObject);
static_cast<Tiger*>(&animal);

4)<h3>reinterpret_cast<h3> - is the most dangerous cast,
and should be user very sparingly.
It turns one type directly into another