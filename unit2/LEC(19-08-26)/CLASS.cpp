#include<iostream>
using namespace std;
class bankaccount{
    private:
    int balance=0;
    public:
    int  accountnumber;
    int deposite( int depositemoney){
        balance+=depositemoney;
    }
    int withdraw( int withdrawmoney){
      return balance -=withdrawmoney;
    }
    void display(){
        cout<<"the current balance="<<balance;
    }
};
int main(){
    bankaccount b;
    b.deposite(344);
    b.withdraw(20);
    b.display();

}    
