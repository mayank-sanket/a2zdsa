// String

#include<iostream>
#include<string>

using namespace std;

int main(){
    string s = "Mayank";
    cout<<s<<endl;
    cout<<s[0]<<endl; //M
    cout<<s[2]<<endl; //y

    int len = s.size();
    cout<<len<<endl; // 6

    s[len-1] = 't';
    // s[len -3] = "x"; // not allowed

    cout<<s<<endl; // Mayant
    return 0;
}