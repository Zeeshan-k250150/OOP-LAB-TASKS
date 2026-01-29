#include "iostream"
using namespace std;
int addNumber(int num1, int num2){
    return num1+num2;
}
int main(){
    int num1,num2;
    cout<<"Enter Two Integers: "<<endl;
    cout<<"Integer 1: ";
    cin>>num1;
    cout<<"Integer 2: ";
    cin>>num2;
    cout<<"The sum of the two numbers is: "<<addNumber(num1,num2)<<endl;
}