#include <iostream>
using namespace std;
class circle{
    float radius;
public:
void getdata();
float area();    
};

void circle::getdata(){
    cout<<"enter the radius";
    cin>>radius;

}
float circle::area(){
    cout<<"the area of the circle=";
    return 3.14*radius*radius;
}
int main(){
    circle c;
    c.getdata();
   cout<< c.area();
}
