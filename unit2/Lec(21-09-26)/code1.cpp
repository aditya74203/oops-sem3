#include <iostream>
using namespace std;
class student {
    public:
    int roll_no;
    string name;

    void getdata(){
        cin>>roll_no>>name;
    }

    void display(){
        cout<<roll_no<<" "<<name<<endl;
    }
};
int main(){
    student s[3];
    cout<<"enter the detail; ";
    for(int i=0;i<3;i++){
        s[i].getdata();
    }
    cout<<"students detail: ";
     for(int i=0;i<3;i++){
        s[i].display();
         }
         return 0;
}