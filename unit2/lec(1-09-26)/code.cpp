#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    Number add(Number n) {
        return Number(value + n.value);
    }

    void display() {
        cout << "Result = " << value << endl;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number result = n1.add(n2);

    result.display();

    return 0;
}