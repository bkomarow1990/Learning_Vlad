#include <iostream>
#include <vector>
using namespace std;
class App {
private:
	string name;
	string version;
	vector<string> requirements;
	float size;  // size in Mbytes
public:
	void print() {
		cout << "Name : " << name << endl;
		cout << "Version : " << version << endl;
		cout << "Requirements : " << endl;
		for (auto& i : requirements)
		{
			cout << i << endl;
		}
		cout << "Size : " << size << endl;
	}
	App(string name, string version, vector<string> requirements, float size) {
		this->name = name;
		this->version = version;
		this->requirements = requirements;
		this->size = size;
		cout << "Ctor for " << name << endl;
	}
	App() // default contructor (ctor) або Конструктор по замовчуванню
		:App("NoName", "0.0.0", vector<string>(),0)
	{
		cout << "It is default ctor" << endl;
	}
	~App()
	{
		cout << "Dtor for " << name << endl;
	}
};
int main() {
	App discord("Dicord", "10.2.14", vector<string>{"Intel Pentium 2", "4GB RAM"}, 200.3);
	discord.print();
	return 0;
}