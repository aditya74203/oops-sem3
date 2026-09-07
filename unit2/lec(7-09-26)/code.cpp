#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    friend void displayMarks(Student s);
};

void displayMarks(Student s) {
    cout << "Marks = " << s.marks;
}

int main() {
    Student s;
    s.setMarks(85);

    displayMarks(s);

    return 0;
}