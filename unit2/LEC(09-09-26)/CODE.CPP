#include <iostream>
using namespace std;

class student{
    public:
    static int count;
    int rollno;
    student(int r){
        rollno=r;
        count++;
    }
};
int student::count=0;
int main(){
    student s1(101);
    student s2(102);
    student s3(103);
    cout<<"Total number of students: "<<student::count<<endl;
    return 0;
}