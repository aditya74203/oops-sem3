#include<iostream>
using namespace std;
class temperature{
    int temp;
public:
  void con(int t){
    temp=t;
   int  temp_in_feh=(temp*9/5)+32;
    cout<<"temperature in feh= "<<temp_in_feh;
  }
};
int main(){
    temperature t;
    int temp;
    cout<<"temp in celcisus";
    cin>>temp;
    t.con(temp);
}