#include <iostream>
#include <vector>
using namespace std;
struct Room {
	float width;
	float height;
	float length;
	vector<string> furniture;
	void print() {
		cout << "Room: " << endl;
		cout << "Width: " << width << endl;
		cout << "Height: " << height << endl;
		cout << "Length: " << length << endl;
		cout << "Furniture: ";
		for (size_t i = 0; i < furniture.size(); i++)
		{
			cout << furniture[i] << ", ";
		}
		cout << endl;
	}
	Room(vector<string>v,float width_ =0,float height_=0,float length_=0) {
		width = width_;
		height = height_;
		length = length_;
		furniture = v;
	}
	Room()
	{
		height = 0;
		width = 0;
		length = 0;
	}

};
int main() {
	vector<string> names;
	names.push_back("Sofa");
	names.push_back("Bed");
	Room room1{ names,22,11,54};
	room1.print();
	return 0;
}