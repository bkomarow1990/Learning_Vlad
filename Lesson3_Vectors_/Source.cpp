#include <iostream>
#include <vector> // Підключаєм бібліотеку
using namespace std;
//int getSize(vector<int> vec){
//	for (size_t i = 0; i < vec.size(); i++)
//	{
//		
//	}
//	return vec.size();
//}
int main() {
	vector<int> v;
	v.push_back(22); //
	v.push_back(33); //
	v[0] = 228;
	v[1] = 13;

	v.push_back(122);
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "new proggram" << endl;
	vector<int> v2;
	v2.push_back(5);
	v2.push_back(7);
	cout << v2.size()<<endl;
	 // 2 3 5 1 3 -> size = 5
	 // 
	 // arr = new int[6];
	 // 
	 //
	
	//v.push_back();
	return 0;
}