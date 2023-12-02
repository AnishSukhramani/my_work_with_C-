#include<iostream>
using namespace std;
class sum{
    int n;
    
    float sum=0;
    std::cout<<"How Many numbers do you want to add";
    cin>>n;
    for(int i=0,i<n,i++){
        float a;
        cout<<"\n Enter "<<i<<"th number-";
        cin>>a;
        sum=sum+a;
        cout<<"\n Sum till now="<<sum
    }
    cout<<"Final summation is = "<<sum;
}
int main(){
    sum obj;
    return 0;
}