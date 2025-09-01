#include <iostream>
#include <string>
using namespace std;
 
int main () {
  auto myNum = 5;
  auto myFloatNum = 5.99;
  auto myDoubleNum = 9.98;
  auto myLetter = 'D';
  auto myBoolean = true;
  auto myString = string("Hello");
     
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}
