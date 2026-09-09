#include <iostream>
using namespace std;
class math{
    public:
    static int add(int a,int b){
        return a+b;
    }
    static int sub(int a,int b){
        return a-b;
    }
};
int main(){
    cout<<"Addition of 5 and 3 is: "<<math::add(5,3)<<endl;
    cout<<"Subtraction of 5 and 3 is: "<<math::sub(5,3)<<endl;
    return 0;
}    