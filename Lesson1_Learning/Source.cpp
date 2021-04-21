#include <iostream>
#include <string>
using namespace std;
// Pointers (вказівник),  Refernce( & )
void getString(int test) // () - arguments, параметри
{
	test = 22;
}
void helloWorld() {
	cout << "HelloWorld" << endl;
	int test = 2;
}
int main() {
	// type values: int, float,char ('a'),bool,string
	int a = 222;
	float b = 22.3;
	getString(a);
	cout << a<<endl;

}