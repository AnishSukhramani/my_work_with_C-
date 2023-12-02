#include <iostream>
#include<string>
using namespace std;

class name {
	public:
		string a="Anish";
		string b="Sukhramani";
};
int main(int argc, char const *argv[])
{
	name obj;
	cout<<"My name is "<< obj.a<<" "<<obj.b<< endl;
	return 0;
}