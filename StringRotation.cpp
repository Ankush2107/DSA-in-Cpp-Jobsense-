#include <iostream>
using namespace std;

bool isRotation(string s1, string s2) {
    if(s1.length() != s2.length()) return false;
    string temp = s1 + s1;      // ABCDABCD
    if(temp.find(s2) != string::npos)  {    // No position
        return true;
    }
    return false;
}
int main() {
    string s1 = "ABCD";
    string s2 = "CDBA";
    if(isRotation(s1, s2)) {
        cout << "Yes, it is a rotation";
    } else {
        cout << "No, it is not a correct rotation";
    }
    return 0;
}