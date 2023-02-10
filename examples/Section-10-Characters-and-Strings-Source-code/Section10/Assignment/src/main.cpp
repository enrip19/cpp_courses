#include <iostream>
#include <string>

using namespace std;

int main() {
  string input_string;

  cout << "Enter a string for Letter Pyramid construction: ";
  //   cin >> input_string;
  input_string = {"abc"};
  cout << endl;

  cout << "\n --- Letter Pyramid --- " << endl;

  int string_len = input_string.size();  // the size of the string says how many
                                         // lines will have the pyramid
  int base_len = string_len * 2 - 1;

  string reverse_string = string(input_string.rbegin(), input_string.rend());
  string base = input_string + reverse_string.substr(1, reverse_string.size());

  cout << "### Debug ###\tBase length: " << base_len << " vs " << base.size()
       << endl;

  cout << "### Debug ###\tBASE:" << base << endl;

  for (int i = 0; i <= string_len; i++) {
    string line_chars = input_string.substr(0, i);
    int num_spaces = string_len - line_chars.size() - 1;
    
    cout << line_chars << ", " << num_spaces << endl;


    if (num_spaces > 0) {
      int spaces_every_sid = num_spaces / 2;

      string pyramid_line = line_chars;

      for (int j = 0; j < spaces_every_sid; j++) {
        pyramid_line.insert(j, {" "});
        pyramid_line.push_back(' ');
      }
      cout << "pyramid_line: " << pyramid_line << endl;
    }

  }

  cout << endl;
}