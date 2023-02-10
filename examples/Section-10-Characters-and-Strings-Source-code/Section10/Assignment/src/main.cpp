#include <iostream>
#include <string>

using namespace std;

int main() {
  string input_string;

  cout << "Enter a string for Letter Pyramid construction: ";
  cin >> input_string;
  cout << "### Debug ###\t Input String: " << input_string << endl;

  cout << "\n --- Letter Pyramid --- " << endl;

  int string_len = input_string.size();  // the size of the string says how many
                                         // lines will have the pyramid
  int base_len = string_len * 2 - 1;

  for (int i = 1; i <= string_len; i++) { 
    string line_chars = input_string.substr(0, i);
    string reverse_line_chars = string(line_chars.rbegin(), line_chars.rend());

    string line =
        line_chars + reverse_line_chars.substr(1, reverse_line_chars.size());
    // cout << "### Debug ###\tline: " << line << endl;

    string pyramid_line = line;

    int num_spaces = base_len - line.size();

    // cout << "### Debug ###\tline_chars: " << line_chars
    //      << "\tnum_spaces: " << num_spaces << endl;

    if (num_spaces > 0) {
      int spaces_every_sid = num_spaces / 2 - 1;

      for (int j = 0; j <= spaces_every_sid; j++) {
        pyramid_line.insert(j, {" "});
      }

      cout << pyramid_line << endl;

    } else
      cout << pyramid_line << endl;
  }

  cout << endl;
}