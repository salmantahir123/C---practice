#include <iostream>
using namespace std;

int doublegame(int x) {
    return x * 3;
}
int main() {
    for (int i = 1; i < 5; i++)
    {
    cout << "double of " << i << " is " <<doublegame(i) <<"\n";
    }
    return 0;
    
}