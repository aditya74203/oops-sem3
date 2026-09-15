#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b;

public:
    Calculator(int x, int y) {
        a = x;
        b = y;
    }

    int addition() {
        return a + b;
    }

    int subtraction() {
        return a - b;
    }

    int multiplication() {
        return a * b;
    }
};

int main() {
    Calculator c(10, 5);

   cout<<"Addition = "<<c.addition()<<endl;
   cout<<"multi[lication = "<<c.multiplication()<<endl;
   cout<<"subraction = "<<c.subtraction()<<endl;

    return 0;
}