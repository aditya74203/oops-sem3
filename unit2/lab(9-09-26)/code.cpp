// compare the area of the rectangle and square using friend function

#include <iostream>
using namespace std;


class Square;

class Rectange {
    private:
        int length;
        int breadth;
        int area;
    public:
    Rectange(int l, int b) {
        length = l;
        breadth = b;
        area = length * breadth;
    }

    friend void calculateArea(Rectange r , Square s);
};

class Square{
    private :
        int side;
        int area;

    public:
    Square(int s) {
        side = s;
        area = side * side; 
     }

     friend void calculateArea(Rectange r , Square s);
};

  void calculateArea(Rectange r , Square s) {
     if(r.area > s.area) {
        cout << "Area of Rectangle is greater than Area of Square" << endl;
     } else if(r.area < s.area) {
        cout << "Area of Square is greater than Area of Rectangle" << endl;
     } else {
        cout << "Area of Rectangle and Area of Square are equal" << endl;
     }
  }

  int main() {
    Rectange rect(5, 10);
    Square sq(7);

    calculateArea(rect, sq);

    return 0;
  }