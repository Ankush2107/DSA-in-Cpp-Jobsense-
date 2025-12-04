#include <iostream>
#include <vector>
using namespace std;

int main() {
  
vector<string> cars = {"BMW", "Mercedes", "Creta", "Brezza"};
cars.push_back("Ford");

for(string car: cars) {
    cout << car << " ";
}
}