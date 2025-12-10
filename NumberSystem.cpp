// decimal to binary
// 5  ->  101 

#include <iostream>
// #include<string>
#include<algorithm>
using namespace std;
// string decimalToBinary(int n) {
//     if(n == 0) return "0";
//     string binary = "";
//     while(n > 0) {
//         int remainder = n % 2;
//         binary += to_string(remainder);
//         n = n/2;
//     }
//     reverse(binary.begin(), binary.end());
//     return binary;
// }
int binaryToDecimal(string binary) {
    int ans = 0;
    int powerOf2 = 1;  // 2 ^ 0 = 1

    for(int i = binary.length()-1; i >= 0; i--) {
        if(binary[i] == '1') {
            ans += powerOf2;
        }
        powerOf2 *= 2;  // Next power: 1 -> 2 -> 4 -> 8
    }
    return ans;
}
int main() {
    // int num;
    // cin >> num;
    string binary;
    cin >> binary;
    cout << binaryToDecimal(binary);
    return 0;
}