#include <iostream>
using namespace std;

int main() {

    string food = "Pizza";
    string* ptr = &food;

    *ptr = "burger";

    cout << food << endl;
    cout << &food << endl;
    cout << *ptr << endl;   // "pizza"
    cout << ptr << endl;

    return 0;
}