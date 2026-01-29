#include "iostream"
using namespace std;
void square(int num){
    int result=num*num;
    cout<<"The square of the integer is: "<<result<<endl;
}

int main(){
    cout<<"Enter an Integer: ";
    int num;
    cin>>num;
    square(num);
}