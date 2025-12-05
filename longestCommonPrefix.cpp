#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& str) {
    if(str.empty()) return "";

    // sort the array of strings
    sort(str.begin(), str.end());

    // Take first and last string
    string first = str[0];
    string last = str[str.size() - 1];

    string ans = "";

    for(int i = 0; i < first.length(); i++) {
        if(first[i] == last[i]) {
            ans += first[i];
        } else {
            break;
        } 
    }
    return ans;
 }

int main() {
    vector<string> v = {"flower", "flow", "flight"};
    cout << "Prefix: " << longestCommonPrefix(v);
    return 0;
}