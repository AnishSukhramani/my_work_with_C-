#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    do{
        cout<<n<<" is greater then 0\n";
        cin>>n; 
    }while(n>0);
    return 0;
}

// in a dowhile loop the body is excecuted first and then the condition is checked
// unlike while loop where the condition is checked first and then the body is excecuted on if the condition is true