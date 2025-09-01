#include <iostream>
#include <string>
using namespace std;
int main() {
    struct {
        string brand ;
        string model ;
        int year ;
    } mycar1, mycar2;

    mycar1.brand = "BMW";
    mycar1.model = "m4";
    mycar1.year = 2000; 

    mycar2.brand = "supra";
    mycar2.model = "m4";
    mycar2.year = 1999;

    cout << mycar1.brand << " " <<mycar1.model << " " <<mycar1.year << "\n";
    cout << mycar2.brand << " " <<mycar2.model << " " <<mycar2.year << "\n";
    return 0;
}



