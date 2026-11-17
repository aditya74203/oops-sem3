// create a base class with a function sound drives two class dog and cat and override the function.
// create a base class employee with a function work derive a class manager and override the function.
#include <iostream>
using namespace std;
class Animal {
public:
     void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows: Meow Meow!" << endl;
    }
};

int main() {
    Animal *a;

    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}