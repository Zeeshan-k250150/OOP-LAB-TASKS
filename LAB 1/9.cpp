#include "iostream"
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    cout<<"Enter 5 elements"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    
    cout<<"The sum of the array is: "<<sum<<endl;
    cout<<"The array reversed is: "<<endl;
    for (int i = 4; i >= 0; i--)
    {
        cout<<arr[i]<<endl;
    }
    
}