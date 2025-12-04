#include <iostream>
using namespace std;

// Polymorphism: many form.
class Animal {
    public:
    void sound() {
        cout << "The animal makes a sound" << endl;
    }
};
class Dog: public Animal {
    public: 
    void sound() {
        cout << "Bark....." << endl;
    }
};
class Cat : public Animal {
    public:
    void sound() {
        cout << "Meow...." <<endl;
    }
};
int main() {
    Dog d1;
    d1.sound()
   return 0; 
}