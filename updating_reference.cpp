#include <iostream>
using namespace std;

int main() {
string food = "pizza";
string &meal = food;

meal = "burger";

cout << food << "\n";
cout << meal << "\n";

return 0;


}