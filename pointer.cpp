#include <iostream>
using namespace std;

int main() {
    string food = "pizza";
    string* ptr = &food;
    
    cout << ptr << "\n";

    cout << food << "\n";

    cout << &food << "\n";

    return 0;
}