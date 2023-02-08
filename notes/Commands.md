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

