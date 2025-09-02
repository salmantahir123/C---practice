#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("salman", 19);
  myFunction("subhan", 14);
  myFunction("saaf", 30);
  return 0;
}
