#include <iostream>
#include <time.h> // ctrl+d
using namespace std;
void func(int & size) {
	size = 2;
}
int main() {
	srand(time(NULL));
	int size = 22; // <--- 0x2313
	func(size);
	cout<<size<<endl;
	return 0;
}