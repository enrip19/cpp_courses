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