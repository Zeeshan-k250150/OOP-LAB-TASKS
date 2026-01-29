#include "iostream"
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter Elements of the array\n";
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        cout<<"The sum of row "<<i<<" is "<<sum<<endl;
    }
    
}