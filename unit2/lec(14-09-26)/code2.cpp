#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

 
    Rectangle(const Rectangle &r) {
        length = r.length;
        width = r.width;
    }
   

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main() {
    Rectangle r1(10, 5);

    Rectangle r2(r1);

    cout << "First Rectangle:" << endl;
    r1.display();

    cout << "\nSecond Rectangle (Copied):" << endl;
    r2.display();

    return 0;
}