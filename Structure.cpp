#include <iostream>
using namespace std;
int a = 50;
int plusFun(int b) {
    return a + b;
}
int plusFun(int b, int c) {
    return a + b + c;
}
double plusFun(double a, double b) {
    return a + b;
}
int main() {
    cout << plusFun(6, 4);
    return 0;
}

