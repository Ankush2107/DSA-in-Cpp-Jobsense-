#include <iostream>

using namespace std;

int main() {
    string greeting = "Welcome, Rashmi";
    auto message = [greeting](string company) {
        cout << greeting << " to " << company << endl;
    };
    message("brillsense");
    return 0;
}