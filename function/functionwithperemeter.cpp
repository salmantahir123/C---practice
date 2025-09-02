#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("ahmed");
  myFunction("ali");
  myFunction("salman");
  return 0;
}
