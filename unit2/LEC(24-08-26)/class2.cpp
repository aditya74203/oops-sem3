#include<iostream>
using namespace std;
class temperature{
    int temp;
public:
  void con(int t){
    temp=t;
    int temp1;
    string s;
    cout<<"enter c or f: ";
    cin>>s;
    for(char c: s){
        if( c=='c'){
            temp1=(temp*9/5)+32;
        }
        else
           temp1=(temp-32)*5/9;
    }
    cout<<"temperature after converting "<<temp1;
  }
};
int main(){
    temperature t;
    int temp;
    cout<<"temp: ";
    cin>>temp;
    t.con(temp);
}