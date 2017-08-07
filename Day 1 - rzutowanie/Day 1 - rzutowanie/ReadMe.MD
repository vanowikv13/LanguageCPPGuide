=========================
Day 1 - rzutowanie theory
=========================

# static_cast
- [] It least problematic cast.
- [] To convert normal object like int to float
- [] static_cast<whatWeWant>(to projection)

# const_cast
- [] To add or remove const
- [] const_cast<whatWeWant>(wariablenpconst) = x;
- [] const_cast<const whatWeWant>(wariableNormal);
- [] Return reference or pointer

# dynamic_cast 
- [] Is for handling polymorphic
- [] We can transfor to another class type if this possible
- [] Polymorphic type has at least one virtual function
declareted or inherited
- [] You can cast sideways or even go another up
- [] if something goes wrong return nullptr or throw std::bad_cast
- [] Only go through public inheritance
- [] Returned object can be pointer or reference 
- [] static_cast<Animals*>(&tigerObject);
- [] static_cast<Tiger*>(&animal);

# reinterpret_cast
- [] Is the most dangerouse cast
- [] Schould be use very sparingly
- [] It turns one type directly into another type
- [] dynamic_cast<oneType>(objectWithOtherType);
