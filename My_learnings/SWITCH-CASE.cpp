#include <iostream>
using namespace std;
int main(){
    char button;
    cin>>button;
    switch (button){
        case 'a':
        cout<<"Hello World"<<endl;
        break;
        case 'b':
        cout<<"Howdy"<<endl;
        break;
    default:
    break;
    };
    return 0;
}