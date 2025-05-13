#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if (age>=18){
        cout<<"adult"<<endl;
    }
    else if (age>12){
        cout<<"teenager"<<endl;
    }
    else{
        cout<<"kid"<<endl;
    }

    

    cout<<"Weekdays"<<endl;






    int day;
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"None"<<endl;
            break; // break is optional here
    }






    cout<<"Characters"<<endl;
    char s;
    cin>>s;
    switch(s){
        case 'a':
            cout<<"first letter"<<endl;
            break;
        case 'b':
            cout<<"second letter"<<endl;
            break;
        default:
            cout<<"None"<<endl;
    }
    return 0;
}