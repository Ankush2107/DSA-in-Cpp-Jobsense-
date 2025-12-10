#include <iostream>
using namespace std;
int countWords(string str) {
    int count = 0;
    int n = str.length();
    for(int i = 0; i < n; i++) {                       
        if(str[i] != ' ') {
            if(i == 0 || str[i-1] == ' ') {
                count ++;
            }
        }   
    }
    return count;
}
int main() {
    string s = "   ";
    cout << "words: " << countWords(s); 
    return 0;
}