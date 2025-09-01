#include <iostream>
using namespace std;

int main()
{
for (int i = 1;i <=5;i++) {
cout << "outer loop" << i << "\n";

for (int j = 1;j <= 4;i++) {
cout << "inner loop" << j << "\n";
 }
}
return 0;
}