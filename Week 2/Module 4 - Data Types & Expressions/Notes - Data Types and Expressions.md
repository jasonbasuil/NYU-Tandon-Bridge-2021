# Notes - Data Types and Expressions

Data

- int

  > Each int data uses 4 bytes (32 bits) in memory.
  >
  > disadvantage of fixed sized data (2^32 = about 4 billion). If you want to use a number exponentially large, it might be a problem.
  >
  > The numbers are represented using the 2's complement method
  >
  > 2 Forms of data: variables & constants
  >
  > C++ literals
  >
  > C++ is a strongly typed language

- float & double

  > Real numbers (could have fractions)
  >
  > fixed sizes
  >
  > double (8 bytes, 64 bits)
  >
  > float (4 bytes, 32 bits)
  >
  > The numbers are represented by floating point method (IEEE-754)
  >
  > C++ literals:
  >
  > For double: 3.4, -8.975, 6.0...
  > For float: 3.4f, -8.975f, ...
  >
  > _type casting_ => can't mix types (e.g. a double + int) ... so you use casting: converting the representation of a data from one type to another type.
  >
  > e.g. int x1; double y1; x1 = 6; y2 = (double)6
  >
  > _expression with mixed types_
  > e.g. converting int to double
  >
  > 5.0 / 2
  >
  > compiler will try to cast 2 into a double

- char
  > characters
  >
  > each char uses 1 byte (8 bits)
  >
  > ASCII table is what we use to make decimal to characters which is then represented by binary in memory
  >
  > e.g. 'a' => 97 ASCII => 01100001
  >
  > 'single quotes' are found single characters 'a'
  >
  > '\n' line break
- string

  > not a built in type in C++
  >
  > #include<string>

- bool
  > uses 1 byte (8 bits)
  >
  > false is represented by a byte of 0s
  >
  > true is any non-zero value
  >
  > C++ literals: true, false
