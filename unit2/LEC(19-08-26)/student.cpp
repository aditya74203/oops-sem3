#include<iostream>
using namespace std;
class student{
    private:
    float marks;
    public:
    string name;
    int rollno;
void getdata(string n,float m,int r){
    marks=m;
    name=n;
    rollno=r;
}    
void grade(int m){
    if(m>=90){
        cout<<"the grade of the stident=A"<<endl;;
    }
    else if (m>=80)
    {
        cout<<"the grade of the student=B"<<endl;
    }
    else if(m>=75){
        cout<<"C";
    }
    else{
        cout<<"fail";
    }    
}
void display(){
    cout<<"the name of the student="<<name<<endl;
    cout<<"the roll no="<<rollno<<endl;
    cout<<"marks of the student="<<marks<<endl;

}
};
int main(){
    student s;
    s.getdata("aadi",90,002);
    s.grade(90);
    s.display();
}