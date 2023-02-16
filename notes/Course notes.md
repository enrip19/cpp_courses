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

## C++ strings
`#include <string>`
- Class in the Standard Template Library
- contiguous in memory 
- dynamic size
- work with input and output streams
- lots of useful member functions
- our familiar operators can be used (+, =, <, <=, >, >=, +=, == , !=, [], ...)
- can be easily converted to C-style Strings if needed
- safer
### Declaring and initializing
```C++
	#include <string>
	using namespace std;
string s1; // Empty
string s2; {"Frank"}; // Frank
string s3 {s2} // Frank
string s4 {"Frank", 3}; // Fra
string s5 {s3, 0, 2}; // Fr
string s6 (2, 'X'); // XXX
```
### Assignment
``` C++
string s1;
s1 = "C++ Rocks!";

string s2 {"Hello"};
s2 = s1;
```
### Concatenation
```C++
string part1 {"C++"};
stirng part2 {"is a powerful"};

string sentence;

sentence = part1 + " " + part2 + " language"; // C*+ is a powerful languange

sentence = "C++" + " is powerful"; // ILLEGAL (because we have 2 c-style literals which can't be concatenated!!! Only works with C++-style strings and a combination of C++ and C-style strings)
```
### Accessing characters 
Same as vectors
```C++
string s1;
string s2 {"Frank"};

cout << s2[0] << endl; // Output: F -> Array-style access
cout << s2.at(0) << endl; // Output: F -> Method-style access

s2[0] = 'f'; // frank
s2.at(0) = 'p'; // prank

for (auto c: s2)
	cout << c << endl;

// Output: 
// F
// r
// a
// n
// k
```
### Comparing 
- You can use :
	- ==
	- !=
	- >
	- >=
	- <
	- <=
- The objects are compared character by character lexically
- Can compare:
	- 2 `std::strings` objects
	- `std::strings` object and C-style string literal
	- `std::string` object and C-style string variable	
```C++
stirng s1 {"Apple"};
string s2 {"Banana"};
stiring s3 {"Kiwi"};
stiring s4 {"apple"};
string s5 {s1}; // Apple

s1 == s5; // True
s1 == s2; // False
s1 != s2; // True
s1 < s2; // True
s2 > s1; // True
s4 < s5; // False
s1 == "Apple"; //True
```
### Substrings - `substr()`
Extracts a substring from a std::string
```C++
object.subsrt(start_index, length);

string s1 {"This is a test"};

cout << s1.substr(0,4); // Output: This
cout << s1.substr(5,2); // Output: is
cout << s1.substr(10,4); // Output: test
```
### Searching - `find()`
Returns the index of a substring in a `std::string`
```C++
object.find(search_string);

string s1 {"This is a test"};

cout << s1.find("This"); // Output: 0
cout << s1.find("is"); // Output: 2
cout << s1.find("test"); // Output: 10
cout << s1.find('e'); // Output: 11
cout << s1.find("is", 4); // Output: 5
cout << s1.find("XX"); // Output: string::npos -> npos = no position available
```
### Removing characters - `erase()` and `clear()`
Removes a substring of characters from a `std::string`
```C++
object.erase(start_index, length);

string s1 {"This is a test"};

cout << s1.erase(0,5); // is a test
cout << s1.erase(5,4); // is a
s1.clear(); // empties string s1
```
### Other useful methods
```C++
string s1 {"Frank"};

cout << s1.length() << endl; // Output: 5

s1+= " James";
cout << s1 << endl; // Output: Frank James
```
### Input `>>` and `getline()`
Reading `std::string` from `cin`
``` C++
// input_stream: from where we are reading
// variable_to_save: where we are saving what we read
// limiter (optional): a char which the program stops reading. 
std::getline(input_stream, variable_to_save, limiter)

string s1;
cin >> s1; // Input: Hello there. 

// Cin only accepts up to the first space!!! (Same for C-style strings)
cout << s1 << endl; // Output: Hello

// With getline() we read the entire line until \n (when user press ENTER)
getline(cin, s1);
cout << s1 << end; // Output: Hello there

getline(cin, s1, 'x'); // Input: this isx
cout << s1 << endl; // Output: this is
```

# Functions
## Arguments
- All arguments must be supplied in the function call
- Some arguments can be defined with a default value:
	- best practice -> in the prototype
	- must appear at the tail end of the parameter list
	- can have multiple default values
		- must appear consecutively at the tail end of the parameter list
	- The compiler will apply the default value if the argument is not supplied in the function call
``` C++
// Single default argument definition in the PROTOTYPE
double calc_cost(double base_cost, double tax_rate = 0.06);

// Multiple default arguments
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
```
### Pass-by-value
- When you pass data into a functioon it is passed-by-value
- **A copy of the data** is passed to the funciton
- Whatever changes you make to the parameter in the function does NOT affect the argument that was passed in.
- Formal vs actual parameters:
	- Formal parameters -> the parameters defined in the function headers
	- Actual parameters -> the parameters used in the function call (the arguments)
``` C++
void param_test (int formal) // formal is a copy of actual
{
	cout << formal << endl; // Output: 50
	formal = 100; // only changes the local copy
	cout << formal << endl; // Output: 100
}

int main(){
	int actual {50};
	cout << actual << endl; // Output: 50
	param_test(actual); // pass in 50 to param_test
	cout << actual << endl; // Output: 50 -> did not change
	return 0;
}
 ```
#### Passsing Arrays to Functions
- `void foo(array_type array_name[]);`
	- The array elements are NOT copied
		- The array name evaluates to the location of the array in memory -> **This addres is what is copied**
		- => The function has no idea how many elements are in the array since all it knows is the location  of the first element (the name of the array)
			- We must pass a **size parameter** to know how many times we have to iterate to work with the array
``` C++
void print_array(int numbers [], size_t size);

int main() {
	int my_numbers[] {1,2,3,4,5};
	print_array(my_numbers); // Output: 1 2 3 4 5
	return 0;
}

void print_array(int_numbers[] my_numbers, size_t size) {
	for (size_t i{0}; i<size; ++i)
		cout << numbers[i] << endl;
}
```
Since we are passing the location of the array
- the function can modify the actual array!
- To solve this we must define the array parameter as **`const`**
```C++
void print_array(const int numbers [], size_t size){
	for (size_t i=0; i<size; ++i)
		numbers[i] = 0; // COMPILER ERROR -> You are attempting to edit a const array
}
```
### Pass-by-reference
Sometimes we want to be able to change the actual parameter from within the function body. In order to achieve this, **we need the location or address of the actual parameter.**
**We can use reference parameters/arrays to tell the compiler to pass in a reference to the actual parameter.**
- Allow to change an actual parameter inside a function
- It doesn't make a copy of the parameter 
	- Less memory use 
	- Faster
- Could cause unwanted changes
To do it we only need to add an `&` to the parameter list:
```C++
void scale_number(int &num);
// or 
void scale_number(int &);

int main() {
	int number {1000};
	scale_number(number); 
	cout << number << endl; // Output: 100
	return 0;
}
void scale_number (int &num) {
	if (numb > 100)
		num = 100;
}
```
To avoid unwanted changes we can use the `const` keyword
``` C++
void scale_number(const int &num);
// or 
void scale_number(const int &);

int main() {
	int number {1000};
	scale_number(number); 
	cout << number << endl; // Output: 100
	return 0;
}
void scale_number (const int &num) {
	if (num > 100)
		num = 100;
}
```
#### Passing Arrays by reference
`void foo(array_type &array_name []);
```C++
void print_array(int numbers [] &my_numbers, size_t size);
// or
void print_array(int numbers [] &, size_t size);

int main() {
	int my_numbers[] {1,2,3,4,5};
	print_array(my_numbers); // Output: 1 2 3 4 5
	return 0;
}

void print_array(int_numbers[] &my_numbers, size_t size) {
	for (size_t i{0}; i<size; ++i)
		cout << numbers[i] << endl;
}
```

## Funtion overloading
- We can have functions that have different parameter lists that have the **same name**
- Abstraction mechanism 
- A type of polymorphism (many forms for the same concept)
	- we can have the same name work with different data types to execute similar behavior
- The compiler must be able tot tell the functions apart based on the parameter list and argument supplied
``` C++
int add_numbers (int, int); // add ints
double add_numbers(double, double); // add doubles

int main() {
	cout << add_numbers(10, 20) << endl; // Output: 30 -> type int
	cout << add_numbers(10.0, 20.0) << endl; // Output: 30.0 -> type double
}

// You must declare the two versions of the function
int add_numbers(int a, int b){
	return a + b;
}

double add_numbers(double a, double b){
	return a + b;
}
```

> Attention! 
> Return type is not considered. If there is no difference in the arguments of two overloaded functions, the compiler will get an error.
> The same with the default values can happen.
``` C++
// Overloading with no arguments
int get_value();
double get_value();
// COMPILER ERROR
cout << get_value() << endl; // Compiler doesn't know which function are you calling.

// Overloading with default arguments
void print(int=100);
void print(double=125.5);
// COMPILER ERROR
print(); // Compiler doesn't know which function are you calling.

// Normally it sends the next error: "Call of overloaded 'print()' is ambiguous"
```

### Scope rules
#### Static local variables
```C++ 
static int value {10};
```
- Value **is** preserved between function cals
- **Only initialized the first time the function is called**
	- If not initialized -> set to 0
	- It will reinitialize never again when we enter again to the function
- It's lifetime is the same as the program
- They are only visible to the statements in the function body
- Are usually used when is need to know a previous value in a function without having to pass it in all the time.
```C++
// Example
void static_local_example(){
	static int num {5000}; //       1st time    2n time    3rd time     ...
	cout << num << endl; // Output:   5000        6000       7000       ...
	nu + = 1000;
	cout << num << endl; // Output:   6000        7000       8000       ...
}

int main(){
	static_local_variable(); // 1st time
	static_local_variable(); // 2nd time
	static_local_variable(); // 3rd time
}
```
> If `num` were not `static` it would have been reinicialized every time we would have used the `static_local_variable`. Thus, the output would have been `5000` and `6000`.


## Inline functions
- Function calls have a certain amount of overhead -> because the call stack
- We can **suggest** to the compiler to compile them *`inline`*
	- avoid function call overhead
	- generate inline assembly code
	- faster
	- could cause code bloat (larger binaries)
		- If you use inline many times, you are duplicating the function code in many places and it could lead to larger binaries
- Compilers optimizations are very sophisticated 
	- will likely inline even without your suggestions
	- Or cannot be inline despite your suggestions
```C++
inline int add_numbers(int a, int  b) { 
	return a + b;
}

int main() {
	int result {0};
	result = add_numbers(100, 200); 
	return 0;
}
```
> They are normally declared in header (.h files)  since the definition must be available to every source file that uses it.

## Recursive functions
A recursive function is a function that calls itself. Either directly or indirectly through another function.
- Recursive proble solving
	- Base case
	- Divide the rest of problem into subproblem and do recursive call
- Notes about recursive functions
	- If recursion doesn't eventually stop you will have infinite recursion
	- Recursion can be resource intensive
	- Remember the base case(s)
		- They terminate the recursion
	- Only use recursive solution when it make sense
	- Anything that can be done recursively can be done iteratively
		- Sometimes you can end to "Stack Overflow" error
```C++
unsigned long long factorial(unsigned long long n){
	if(n==0)
		return 1;
	return n * factorial(n-1);
}

int main(){
	cout << factorial(8) << endl;
	return 0;
}
```


# Pointers
Work same as C
## Always initialize pointers 
``` C++
variable_type * pointer_name {nullptr};
```
- Always initialize pointers
- Uninitialized pointers contain garbage data and can point anywhere
- Initializing pointer to zero or `nullptr` represents address zero
- **If you don't initialize a pointer to point to a variable or function then you should initialize it to `nullptr` to "make it null"** 
## Dynamic memory allocation
Allocating storage from the heap at runtime
- We often don't know how much storage we need until we need it
- We can allocate storage for a variable at run time
- We can use pointers to access newly allocated heap storage
### Allocation
#### `new` keyword
`new` is used to allocate storage:
```C++
int *int_ptr {nullptr};

int_ptr = new int; // allocate an integer on the heap

cout << int_ptr << endl; // Output: 0x2747f28
cout << *int_ptr << endl; // Output: 41188048 -> garbage because the allocated integer is not initialized yet

*int_ptr = 100;
cout << *int_ptr << endl; // Output: 100
```
> IMPORTANT REMARKS:
> - The integer doesn't have name. **The only way to address it is by it's pointer**
> - If we loose or reassign the pointer there is no way to get the integer data or assign new data to it. -> MEMORY LEAK
> - When we are done with the allocated storage, we mus deallocate it. This makes that storage available to the rest of the program

### Deallocation
#### `delete` keyword
`delete` is used to deallocate storage
```C++
int *int_ptr {nullptr};

int_ptr = new_int; // allocate an integer on the heap

...

delete int_ptr; // frees the allocated storage
```

### Array allocation/deallocation
For arrays we will use `new[]` and `delete[]` keywords
```C++
int *array_ptr {nullptr};
int size {};

cout << "How big do you want the array? ";
cin >> size;

array_ptr = new int[size]; // allocate array on the heap

// We can access the array here
... 

delete[] array_ptr; // free allocated storage
```
> Note that for `delete[]` we don't need to write the size

## `const` qualifier in pointers
There are several ways to qualify pointers using `conts` keyword:
#### Pointers to constants
```C++
int high_score {100};
int low_score {65};

const int *score_ptr {&high_score};

*score_ptr = 86; // ERROR
score_ptr = &low_score // OK
```
- The data pointed to by the pointers is constant and **cannot** be changed.
- The pointer itself can change and point somewhere else.
#### Constant pointers
```C++ 
int high_score {100};
int low_score {65};

int *const score_ptr {&high_score};

*score_ptr = 86; // OK
score_ptr = &low_score // ERROR
```
- The data pointed to by the pointers can be changed.
- The pointer itself **cannot** change and point somewhere else.
#### Constant pointers to constants
```C++ 
int high_score {100};
int low_score {65};

const int *const score_ptr {&high_score};

*score_ptr = 86; // ERROR
score_ptr = &low_score // ERROR
```
- The data pointed to by the pointers is constant **cannot** be changed.
- The pointer itself **cannot** change and point somewhere else.
## Passing pointers to a function (pass-by-reference)
```C++
void double_data (int *int_ptr);

void double_data (int *int_ptr){
	*int_ptr *= 2;	
}

int main() {
	int value {10};
	cout << value << endl; // Output: 10
	double_data(&value);
	cout << value << endl; // Output: 20
}
```
> Note that with pointers, the pass-by-reference technique obligates us to **explicitly pass the address ourselfs.**
> This is different with the variables (with the `&`) which the compiler do that for us automatically
## Returning a pointer from a function
```C++
type * function();
```
- Should return pointers to:
	- Memory dynamically allocated in the function
	- Data that was passed in
- Never return a pointer to a local function variable!
``` C++
// Example of a returning dynamically allocated memory
int * create_array(size_t size, int init_value = 0){
	int *new_storage {nullptr};
	new_storage = new int[size];

	for (size_t i{0}; i < size; ++i)
		*(new_storage + i) = init_value;

	return new_storage;
}

int main() {
	int *my_array; // will be allocated by the function

	my_array = create_array(100,20); // create the array

	// use the array
	...

	delete[] my_array; // be sure to free the storage
	return 0;
}
```
## Potential Pointer Pitfalls
### Uninitialized pointers
``` C++
int *int_ptr; // pointing anywhere

...

*int_ptr = 100; // Hopefully crash -> The pointer might be pointing to a very important area and doing this you are modifying or wiping out.
```
### Dangling pointer (wild/stray pointers)
- Pointer that is pointing to released memory:
	- For example, 2 pointers point to the same data. 1 pointer releases the data with `delete`. The other pointer accesses the released data.
- Pointer that points to memory that is invalid
	- For example a returned pointer to a function local variable
### Not checking if `new` failed
- If `new` fails an exception is thrown
	- We can use exception handling to catch them
- Dereferencing a  null pointer will cause your program to crash
### Memory leaking (orphaned/leaked memory)
- Forgetting to release allocated memory with `delete`
- If you lose your pointer to the storage allocated on the heap you have not way to get to that storage again
	- Example: You have allocated the memory in a function and the pointer was declared int the function. Thus, it is a local pointer which will be destroyed when the function terminates. You just lost your pointer. There's no way you can reference that allocated memory on the heap. -> Memory leak
> This is one of the most common pointer problems

# Reference
A reference is an alias for a variable
- Must be initialized to a variable when declared
- Cannot be null
- Once initialized ccannot be mad to refer to a different variable
- Very useful as function parameters
- Might be helpful to think of a reference as a constant pointer that is automatically dereferenced
## References in range-based for loops
Non-reference for loop
```C++
vector<string> stooges {"Larry", "Moe", "Curly"};

for (auto str: stooges) // It is doing a copy of stooges
	str = "Funny"; // changes the copy!!!

for (auto str: stooges) // It is doing a copy of stooges
	cout << str << endl; // Output: Larry, Moe, Curly -> (nothing has changed)
```
Referenced for loop
```C++
vector<string> stooges {"Larry", "Moe", "Curly"};

for (auto &str: stooges)
	str = "Funny"; // changes the actual

for (auto str: stooges)
	cout << str << endl; // Output: Funny, Funny, Funny
```
## References in function parameters
Refer to [Functions section -> Pass-by-reference subsection](#Functions#Pass-by-reference)

# L-values and R-values
## L-values
- Values that have names and are addressable
- Modifiable if they are not constatns
```C++
int x {100}; // x is an l-value
x = 1000;
x = 1000 + 20;

100 = x; // 100 is NOT an l-value -> is an r-value
(1000 + 20) = x; // (1000 + 20) is NOT an l-value -> is an r-value

string name; // name is an l-value
name = "Frank";

"Frank" = name; // "Frank" is NOT an l-value -> is an r-value
```
#### L-value references
- They are the references we have used because we are referencing L-values
## R-values
- Non-addressable and non-assignable values (values that aren't an L-value) 
	- On the right-hand side of an assignment expression
	- A litteral
	- A temporary which is intended to be non-modifiable
- Can be assigne to L-values explicitly

--- 
# Object-Oriented Programming (OOP)
## Procedural programming limitations
- Functions need to know the structure of the data
	- if the structure of the data changes many functions must be changed
- As programs get larger they become more:
	- difficult to understand
	- difficult to maintain
	- difficult to extend
	- difficult to debug
	- difficult to reuse code
	- fragile and easier to break
## What is OOP?
### Pros
- Modeling the software in Classes and Objects
	- focus is on classes that model real-world domain entities
	- allows developers to think at a higher level of abstraction
	- used successfully in very large programs
- Encapsulation
	- objects contain data AND operations that work on that data
	- An extension of Abstract Data Type (ADT)
	- Helps dealing the complexity
- Information-hiding
	- implementation-specific logic can be hidden
	- users of the class code to the interface since they don't need to know the implementation
	- more abstraction
	- easier tot test, debug, maintain and extend
- Reusability
	- easier to reuse classes in other applications
	- faster development
	- higher quality
- Inheritance
	- can create new classes in term of existing classes
	- reusability
	- polymorphic classes
- Plymorphism
- etc
### Limitations
- Not a panacea
	- OOP won't make bad code better
	- not suitable for all types of problems
	- not everything decomposes to a class
- Learing curve
	- usually a steeper learning curve, especially fo C++
	- many OO languages, many variations of OO concepts
- Design
	- usually more up-front design is necessary to create good models and hierarchies
- Programs can be:
	- larger in size
	- slower
	- more complex
## Classes and Objects
### Classes
- blueprint from which objects are created
- a user-defined data-type
- has attributes (data)
- has methods (functions)
- can hide data and methods
- provides a public interface
### Objects
- created from a class
- represents a specific instance of a class
- can create many, many objects
- each has its own identity
- each can use the defined class methods
### Declaring a class
```C++
class Class_Name
{
	// declarations
};

// Example
class Player
{
	// attributes
	std::string name;
	int health;
	int xp;

	// methods
	void talk(std::string text_to_say);
	bool is_dead();
};
```
### Creating objects
```C++
// Creating objects
Player frank;
Player jim;

// Creating pointers to objects -> dynamically allocation of objects to the heap
Player *enemy = new Player();
delete enemy;

// Creating array of objects
Player players[] {frank, jim};

// Creating vector of objects
std::vector <Player> players {frank};
players.push_back(jim);
```
### Accessing Class Members
- We can access 
	- class attributes
	- class methods
- Some class members will not be accessible 
- We need an object to access instance variables
#### Objects (dot operator)
If we have an object we can use dot operator:
``` C++
Account frank_account;

frank_account.balance; // accessing to an attribute
frank_account.deposit(1000.00); // accessing to a method
```
#### Pointers to objects (dot operator or arrow operator)
If we have a pointer to object (member of pointer operator) we can use two techniques:
- Dereference the pointer and then use the dot operator
- Use the member of pointer operator: **`->`** (arrow operator)
	- It will dereference the pointer and then apply the dot operator (automatically)
```C++
Account *frank_account = new Account();

// Dereference + dot operator
(*frank_account).balance;
(*frank_account).deposit(1000.00),

// Arrow operator
frank_account -> balance;
frank_accout -> deposit(1000.00);
```

## Class member access modifiers
- `public`
	- accessible everywhere
- `private`
	- accessible only by members or friends of the class
	- if you try to access to a private class member from outside the class you get a compiler error
- `protected`
	- used with inheritance
``` C++
class Class_Name
{
private:
	// declarations
protected:
	// declarations
public:
	// declarations
};

// Example:
class Player {
private:
	// attributes
	string name {"Player"};
	int health;
	int xp;
public:
	//methods
	void talk(string text_to_say) { cout << name << "says " << text_to_say << endl;}
	bool is_dead()
};

int main() {
	Player player1;
	
	player1.name = "Player1"; // Compiler ERROR
	cout << player1.health << endl; // Compiler ERROR
	player1.talk("Hello world"); // Output: Player says Hello world

	return 0;
}
```

> Class member access modifiers help into debugging. If you put the attributes to private access and use methods to modify them, you will always know that if there is an error in an attribute, the bug will be located to the method which edits it.

### Implement member Methods
- Similar to how implement functions
- Member methods have access to member attributes
	- Don't need to pass arguments
- Can be implemented 
	- inside the class declaration -> Implicitly `inline`
	- outside the class declaration -> need to use `Class_name::method_name`
- Can separate specification from implementation
	- **.h file** for the class declaration
	- **.cpp file** for the class implementation
#### Inside-class method declaration
```C++
class Account {
private:
	double balance;
public:
	void set_balance(double bal){ // setter
		balance = bal;
	}

	double get_balance() { // getter
		return balance;
	}
};
```
#### Outside-class method declaration
``` C++
-------------------------- Account.h file ---------------------------------------
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_ -> This is C-style

#pragma once -> This is modern C++ style (not always supported by the compiler)

class Account {
private:
	double balance;

public:
	void set_balance(double bal);
	double get_balance();
};

#endif -> This is C-style (don't need for modern C++ style)
---------------------------------------------------------------------------------

-------------------------- Account.cpp file -------------------------------------
#include "Account.h" 

void Account::set_balance(double bal){ // setter method
	balance = bal;
}
double Account::get_balance() { // getter method
	return balance;
}
---------------------------------------------------------------------------------

--------------------------- main.cpp file ---------------------------------------
#include <iostream>   // compiler knows where it is the library
#include "Account.h"  // "" tells the compiler is a local library from project

int main() {
	Account frank_account;
	frank_acccount.set_balance(1000.00);
	double bal = frank_account.get_balance();

	std::cout << bal << std::endl; // Output: 1000
	return 0;
}
---------------------------------------------------------------------------------
```
## Constructors 
- Special member method
- Invoked during object creation
- Useful for initialization
- Same name as the class
- No return type is specified
- Can be overloaded
## Destructors
- Special member method
- Invoked automatically when an object is destroyed (out of scope or `delete`)
- Useful to release memory and other resources
- Same name as the class proceeded with a tilde (~)
- No return type and no parameters
- Can NOT be overloaded
> Constructors and destructors are defined same as methods (can be inside-class or outside-class)
``` C++
class Player
{
private: 
	std::string name;
	int health;
	int xp;
public:
	// Overloaded Constructors declaration
	Player(); // constructor 1
	Player(std::string name); // constructor 2
	Player(std::string name, int health, int xp); // constructor 3
	// Destructor declaration
	~Player();
};

void foo(){
	// Declaring 4 Player-type objects
	Player slayer; // constructor 1 called
	Player frank {"Frank", 100, 4}; // constructor 3 called
	Player hero {"Hero"}; // constructor 2 called
	Player villain {"Villain"}; // constructor 2 called
} // 4 destructors called

int main() {
	foo(); // refer to function declaration above

	Player *enemy = new Player("Enemy", 1000, 0); // constructor 3 called

	delete enemy; // destructor called

}
```

### Default constructor (no-args constructor)
> If no constructor or/and destructor are declared, C++ provide a default constructor or/and destructor that are empty. 
> 
> ATTENTION: If you declare a constructor with arguments, it will not generate a no-args constructor. A compiler error will rise!
- Does not expect any arguments
- Called when you instantiate a new object with no arguments