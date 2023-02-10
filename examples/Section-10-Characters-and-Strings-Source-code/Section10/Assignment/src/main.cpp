#include <iostream>
#include <string>

using namespace std;

int main() {
  string input_string;

  cout << "Enter a string for Letter Pyramid construction: ";
  cin >> input_string;
  cout << endl;

  cout << "\n --- Letter Pyramid --- " << endl;

  int string_len = input_string.size();
  int base_len = string_len * 2 - 1;

  string reverse_string = string(input_string.rbegin(), input_string.rend());
  string base = input_string + reverse_string.substr(1, reverse_string.size());

  cout << "### Debug ###\tBase length: " << base_len << " vs " << base.size()
       << endl;

  cout << "### Debug ###\tBASE:" << base << endl;

  for (int i = 0; i < ((string_len * 2) - 1); i++) {
  }

  cout << endl;
}