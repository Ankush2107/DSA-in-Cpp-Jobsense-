// Recursion: Function calling itself.
// 1 to 10 numbers sum?

#include <iostream>
using namespace std;

// int sum(int n) {
//     if(n > 0) {
//         return n + sum(n-1);
//     } else {
//         return 0;
//     }
// }

int sum(int n) {
    if(n > 0) {
        return n + sum(n-1);
    } else {
        return 0;
    }
}


// int factorial(int n) {
//     if(n > 1) {
//         return n * factorial(n-1);
//     } else {
//         return 1;
//     }
// }

// 5! = 5*4*3*2*1
// n * (n-1) * (n-2) ....  1
int main() {
    int result = sum(5);
    cout << result;    
    return 0;
}