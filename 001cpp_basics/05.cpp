// Arrays basics

#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3]<<endl;

    arr[3] +=12;
    cout<<arr[3]<<endl; // 16

    // what if I store a float in an array of int type?

    arr[1] = 10.12;
    cout<<arr[1]<<endl; // 10

    arr[2] = 'S';
    cout<<arr[2]<<endl; // 83

    // arr[4] = "Striver"; // cannot do this
    // cout<<arr[4]<<endl;

    return 0;
}