#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the number:";
    cin>>n;
    for(int a=1; a<=n;a++){
        sum = sum + a;
    };
    cout<<"The sum of all natural numbers upto "<<n<<" is equal to "<<sum;

    return 0;
}