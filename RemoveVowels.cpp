#include <iostream>
using namespace std;
string removeVowels(string s) {
    string ans = "";
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            continue;
        } else {
            ans = ans + ch;
        }
    }
    return ans;
}
int main() {
    string s = "orange";
    cout << removeVowels(s) << endl;
    return 0;
}