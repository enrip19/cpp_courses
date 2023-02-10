// Section 10
// Challenge -
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution
cipher. You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the
alphabet. For example, every 'a' get replaced with an 'X', and every 'b' gets
replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted
message. Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits,
puncuation, whitespace and so forth. Also, currently the cipher always
substitues a lowercase letter with an uppercase letter and vice-versa. This
could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
  string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr "};

  string secret_message, encrypted_message, decrypted_message;

  cout << "Write a secret message: ";
  getline(cin, secret_message);
  cout << endl;

  for (auto c : secret_message) {
    char k = key[alphabet.find(c)];
    encrypted_message += k;
    cout << "Char: " << c << " -> Key: " << k << endl;
  }
  cout << "Encripted message: " << encrypted_message << endl;

  for (auto c : encrypted_message) {
    char a = alphabet[key.find(c)];
    decrypted_message += a;
    cout << "Char: " << c << " -> Alph: " << a << endl;
  }

  cout << "Decrypted message: " << decrypted_message << endl;

  cout << endl;
  return 0;
}
