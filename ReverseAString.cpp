#include <iostream>
using namespace std;

void reverseString(string &s) {
    int start = 0;
    int end = s.length() - 1;
    while(start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}
int main() {
    // Reverse a string
    // "hello"   -->  "olleh"
    string s = "brillsense academy";
    reverseString(s);
    cout << s << endl;

    return 0;
}