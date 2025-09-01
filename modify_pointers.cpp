#include <iostream>
using namespace std;

int main(){
    string food = "pizza";

    string* ptr = &food;
   
    cout<< ptr << "\n";

    cout << *ptr << "\n";

    cout << food << "\n";

    cout << &food << "\n";
    
    *ptr = "burger";

    cout << food << "\n";

    cout << *ptr << "\n";

    return 0;
}