#include <iostream>
using namespace std;
class square{
    float side;
    public:
    void getdata();
    float area();
};
void square::getdata(){
    cout<<"enter the side=";
    cin>>side;
}
float square::area(){
    cout<<"area of the square =";
    return side*side;
}
int main(){
    square s;
    s.getdata();
    cout<<s.area();
}