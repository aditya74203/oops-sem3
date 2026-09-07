#include <iostream>
using namespace std;

class Sports;  // Forward declaration

class Student
{
private:
    int academicMarks;

public:
    void getAcademicMarks()
    {
        cout << "Enter academic marks: ";
        cin >> academicMarks;
    }

    friend int totalMarks(Student s, Sports sp);
};

class Sports
{
private:
    int sportsMarks;

public:
    void getSportsMarks()
    {
        cout << "Enter sports marks: ";
        cin >> sportsMarks;
    }

    friend int totalMarks(Student s, Sports sp);
};

int totalMarks(Student s, Sports sp)
{
    return s.academicMarks + sp.sportsMarks;
}

int main()
{
    Student s;
    Sports sp;

    s.getAcademicMarks();
    sp.getSportsMarks();

    cout << "Total Marks = " << totalMarks(s, sp) << endl;

    return 0;
}