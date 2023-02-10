# Basic I/O using `cin` and `cout` - Standard library
## `cout` 
- Standard output stream
- console/screen 
## `cin`
- standard input stream
- keyboard
## `<<`
- Insertion operator
- output streams
- Insert the data into the cout stream
``` C++
// insert data into the cout stream
`cout << data;`
// can be chained
can be chained -> `cout << "data 1 is " << data1;
// doesn't automatically add line breaks
cout << "data 1 is " << data1 << endl; // option 1. With this option, it will also FLUSH the stream
cout << "data 1 is " << data 1 << "\n" // option 2
```
## `>>`
- extraction operator
- input streams
- The information is interpreted based on the type of the variabe we are saving the stream 
	- Can fail if the entered data cannot be interpreted.  `data` have an undetermined value
``` C++
// Extract data from the cin stream based on data's type
cin >> data; 
// Can be chained
cin >> data1 >> data2;
```

# Initializing variables
``` C++
int age; // uninitialized

int age = 21; // C-like inititialization

int age (21); // Construction initialization

int age {21}; // C++11 list initialization syntax
```

# Types of Constants
- Literal Constants (normal constants)
- Declared constants: constants declared using the `const` keyword. 
	- If you try to change the assinged value to a declared constant, the compiler will do an error.
``` C++
const double pi {3.1415926};
```
- Defined constants: constants declared using the `#define` preprocessor instruction	
	 - Don't use defined constants in Modern C++ due to the fact that is difficult for the compiler to check errors (because preprocessor doesn't know c++). 
	   Use Declared contants instead.

# Arrays
## 1D Arrays
``` C++
// declaration
element_type array_name [number_of_elements];

// initialization
element_type array_name [number_of_elements] {init_list}; 
	//You can skip the number_of elements. The compiler will calculate from init_list
	element_type array_name [] {init_list};
	//If you skip the init_list, all elements will be initialized to 0
	
	element_type array_name [3] {};
	//output: [0,0,0]
	
// Access/store to array elements
array_name[element_index]; // -> There is no bound checking!!!

//Examples
int test_scores [5];
int test_scores [5] {100,95,99,87,88};
cout << test_scores[2]; //output is: 99
cin >> test_score[2];
cout << test_scores; //output is the address of the array
```

## 2D Arrays
``` C++
// Declaration of the 2 dimensions
const int rows {3};
const int cols {4};
// Declaration of the 2D array.
int movie_rating [rows][cols];

//Accessing to the array
cin >> movie_rating[1][2];
cout << movie_rating[1][2];
```

## Multi-dimensional Arrays
``` C++
// Declaration
int movie_rating[3][4]
{
	{0,4,3,5},
	{2,3,3,5},
	{1,4,4,5}
}
```

# Vector
- Container in the C++ Standard Template Library
- **It is an array that can grow and shrink in size at execution time (Dynamic arrays)**
## Characteristics
- Similar semantics and syntax as arrays
- Very efficient
- Can provide bounds checking
- Can use lots of cool functions like sort, reverse, find and more.

- Dynamic size
-  Elements are all the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index
- First element is at index 0
- Last elelment is at index size-1
- using [] -> no checking to see if you are out of bounds
	- They provide many useful functions that do bounds checking
- Elements initialized to zero
- Very efficient
- Iteraion (looping) is often used to process


## How to use them?
### Declaration & initialization
```C++
#include <vector> 
using namespace std; // vectors are part of standard library so we must declare the namespace or use std::vector
vector <char> vowels; // vector of chars (undefined size)
vector <int> test_scores; // vector of ints (undefined size)

// Initialization
// constructor initialization syntax
vector <char> vowels (5); // vector of chars (5 chars size)
vector <int> test_scores (10); // vector of ints (10 ints size). They automatically set to 0
vector <double> hi_temperatures (365, 80.0); // vector of 365 doubles initialized to 80.0 value

// array-like initialization syntax
vector <char> vowels {'a','e','i','o','u'}; // vector of 5 chars initialized as the list says
vector <int> test_scores {100,98,89,85,93}; // vector of 5 ints initialized as the list says
```

### Accessing vector elements
```C
vector <int> test_scores {100,95,99};

// array-like access
vector_name[element_index];

// Example
cout << test_scores[0];
```

#### `vector.at()`  method
Access to the element index you put in the argument.

> Same as array-like access but with bounds-checking
 
```C++
// at() method
vector_name.at(element_index);

// Example
vector <int> test_scores {100,95,99};

cout << test_scores.at(0);
test_scores.at(1) = 90;
cin >> test_scores.at(3);
```
#### `vector.push_back()` method
- adds to the back of the vector the value in it's argument
- Vector will automatically allocate the required space
- All vectors elements must be of the same type, so you must put in the element argument a same-type value to be added.
```C++
// push_back() method
vector_name.push_back(element);

// Example
vector <int> test_scores {100,95,99};

test_scores.push_back(80); // 100,95,99, 80
test_scores.push_back(90); // 100,95,99,80, 90
```

#### `vector.size()` method
- Returns the number of items are in the vector when you call the function.
``` C++
// size() method
cout << vector_name.size();
```

### 2D vector
```C++
vector <vector <int>> movie_ratings
{
	{1,2,3,4},
	{1,2,3,4},
	{1,2,3,4}
}
```

# Expressions
Expresions are a sequence of operators and operands that specifies a computation.
- The most basic  building block of a program
- Computes a value from a number of operands
## Examples
``` C++
34 //literal
favorite_number //variable
1.5 + 2.8 // addition
2 * 5 // multiplication
a > b // relational
a = b // assignment
```

# Statements
A complete line of code that performs some action
- Usually terminated with a semi-colon ( `;` )
- Usually contain expressions
- C++ has many types of statements: expression, null, compound, selection, iteration, declaration, jump, try blocks, ...
## Examples
``` C++ 
int x; // declaration
favorite_number = 12; //assignment
1.5 + 2.8; // expression
x = 2 * 5 //asssignment
if(a > b) cout << "a is greater than b"; //if
; // null statement -> performs no actions
```

# Operators
- assignment operator -> **=**
- arithmetic operators -> **+, -, *, /, %** 
- incremement operator -> **++ 
- decrement operator -> **--**
- equality operators -> **== , != 
- relational operators -> **>, >=, <, <=, < = >**
- logical operators -> **not, !, and, &&, or, ||**
 
## Mixed Expressions and Conversions
- C++ operations occur oon same type operands
- **If operands are of different types, C++ will convert one** -> Coercion
	- If it can't, a compiler error will occur
### Conversions
- Higher vs Lower types -> it converts the lower type to the higher type
	- Example: double vs int -> converts int to a double
	- Special: short and chart types are always converted to int.
#### Definitions
- Type Coercion: conversion of one operand to another data type
- Promotion: conversion to a higher type
	- Used in mathematical expressions
```C++
2 * 5.2 // 2 is promoted to 2.0 (from int to double)
```
- Demotion: conversion to a lower type
	- Used with assignment to lower type
```C++
int num {0};
num = 100.2; // num is demoted to 100 (from double to int) 
			 //-> Warning! POTENTIALLY LOSS OF INFORMATION!!!
```

### Explicit Casting
```C++
// Modern C++ casting -> Checks if the variable can be converted to the cast type
static_cast<type>(variable_to_cast);

// Old C-style casting
(type) variable_to_cast;

// Example Modern C++ cast
int total_amount {100};
double tot_amo = static_cast<double>(total_amount); // equals to 100.0

// Example Old C-style cast
int total_amount {100};
double tot_amo = (double) total_amount; // equals to 100.0
```

# Loops
**All loops from C are available in C++.**

## Range-based For Loop
```C++
for (var_type var_name : sequence)
	statements; // can use var_name
}

// Example
int scores [] {100, 90, 97};

for (int score : scores)
	cout << score << endl;
// Output
// 100
// 90
// 97	
// The code iterates into the array scores.

// We don't need to declarate the type of the variable (with the word auto):
int scores [] {100, 90, 97};

for(auto score : scores)
	cout << score << endl;

```

# Characters
## Character functions
`#include <cctypes>`
- Functions for testing characters
![](images/Pasted%20image%2020230210105652.png)
- Functions for converting character case
![](images/Pasted%20image%2020230210105718.png)
# Strings
## C-Style strings
- Sequence of characters
	- continguous memory
	- **implemented as an array of characters**
	- terminated by a null character (null)
	- referred to as zero or null terminated strings
- String literal
	- sequence of characters in double quotes. -> Example: `"Frank"`
	- constant
	- terminated with null character
### Cstring library
`#include <cstring>`
Functions that work with C-style strings
- copying
- concatenation
- comparision
- searching
- etc
```C++
char str[80];
strcpy(str, "Hello "); // copy
strcat(str, "there"); // concatenate
cout << strlen(str); // output: 11
strcmp(str, "Another"); // output > 0
```
### Cstandard library
`#include <cstdlib>`
Functions to convert C-style Strings to:
- integer
- float
- long 
- etc

