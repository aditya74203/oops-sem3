#include<iostream>
using namespace std;
class university{
    private:
    string uni_name;
    public:
    university(string u){
        uni_name=u;
    }
    class department{
        private:
        string dep_name;
      public:
      department(string d){
        dep_name=d;
      }
    void displaydepartment(){
        cout<<"department Name: "<<dep_name<<endl;
    }
};
void displayuniname(){
    cout<<"University Name: "<<uni_name<<endl;
}
};
int main(){
    university u("ABES ENG COLLEGE");
    university::department d("BTECH");
    u.displayuniname();
    d.displaydepartment();
    return 0;
}