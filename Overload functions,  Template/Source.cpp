#include <iostream>
#include <string>
using namespace std;
struct Person {
	string name;
	int age;
	void setName(string name) {
		if (name.empty())
		{
			return;
		}
		this->name = name;
	}
	void print() {
		cout << "---Person---\n" << "Name: " << name << " Age: " << age << endl;
	}
};
int add(int one, int two) {
	return one + two;
}
int add(string one, string two) {
	return stoi(one) + stoi(two);
}

int main() {
	srand(time(NULL));
	/*int* arr = new int[10];
	cout<<add("22","33")<<endl;*/
	Person valera;
	Person* persons = new Person[100];
	string* names = new string[10]{"Ann","Oleg","Ivan","Valera","Maxim","Vlad","Bogdan","Vadym","Vasya","Petya"};

	for (size_t i = 0; i < 100; i++)
	{
		persons[i].name = names[rand() % 10];
		persons[i].age = 18 + rand() % 33;
	}
	for (size_t i = 0; i < 100; i++)
	{
		persons[i].print();
	}
	/*cout << "size of int: " << sizeof(int) << endl;
	cout << "size of string: " << sizeof(string) << endl;
	cout << sizeof(valera) << endl;*/
	return 0 ;
}