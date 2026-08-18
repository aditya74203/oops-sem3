#include <iostream>
using namespace std;
// void increment(int x){
//     x=x+1;
// }
// int main(){
//     int a=5;
//     increment(a);
//     cout<<a;
// }
// void increment(int &x){
//     x=x+1;

// }
// int main(){
//     int a=5;
//     increment(a);
//     cout<<a;
// } 
// int pointer(int* x){
//    *x= *x+1;
// }
// int main(){
//     int a=5;
//     pointer(&a);
//     cout<<a;

// }
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<b;
}
int main(){
    int a=5;
    int b=3;
    swap(a,b);
}