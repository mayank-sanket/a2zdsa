// 2D array


#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[3][5];
    arr[1][0] = 12;
    cout<<arr[1][0] <<endl; // 12
    
    cout<<arr[2][4]<<endl; // garbage value
    return 0;
}