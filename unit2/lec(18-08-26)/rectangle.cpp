#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area() {
        cout << "Area = " << length * breadth << endl;
    }

    void perimeter() {
        cout << "Perimeter = " << 2 * (length + breadth) << endl;
    }
};

int main() {
    Rectangle r;

    r.getData();
    r.area();
    r.perimeter();

    return 0;
}