#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Mayank";
    string t = "Mayan Sanket";
    string u;

    // cin>>u; // even if you enter Mayank Sanket, it accepts only Mayank

    // cout<<u<<endl; // prints the part of string before the first space character

    string v;
    getline(cin, v); // try giving Mayank Sanket as input
    cout<<v<<endl; // prints the whole line of string



    char ch = 'a';
    cout<<ch<<endl;
}