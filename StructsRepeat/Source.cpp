#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
struct Student {
	// can contains fields, and methods
	string name;
	int age;
	vector<int> marks;
	Student(string name = "NoName", int age = 0) {// input for itself arguments(parameters) 
		this->name = name;
		this->age = age;
	}
	Student(vector<int> marks, string name = "NoName", int age = 0) {// input for itself arguments(parameters) 
		this->name = name;
		this->age = age;
		this->marks = marks;
	}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Marks: ";
		for (auto& i : marks)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	float getAverageMark() {
		if (marks.empty())
		{
			return 0;
		}
		int summ = 0;
		for (auto& i : marks)
		{
			summ += i;

		}
		return (float)summ / marks.size();
	}
	/*Student()
	{
		this->name = "NoName";
		this->age = 0;
	}*/
	// 10 12 9 7 12 11 - collection or container
};
int main() {
	Student valerchik;
	vector<Student> students{ Student(), valerchik, Student("Anatoliy",22), Student(vector<int>{10,12,11,9,11}, "Ivan", 19), Student(vector<int>{9,5,3,6,3,1,10}, "Anton", 21) };
	for (auto& i : students)
	{
		cout << "--------------------------" << endl;
		i.print();
		cout << "Average Mark: " << i.getAverageMark() << endl;
	}
	return 0;
}