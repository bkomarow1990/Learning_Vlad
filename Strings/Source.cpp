#include <iostream>
#include <string> // for string type
using namespace std;
string deleteSymb(string str, char symb){
	string result="";
	// habib
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] != symb)
		{
			result += str[i];
		}
	}
	return result;
}
string replaceSymb(string str, char symb,char replacing_symb) {
	string result = str;
	// habib b => s
	for (size_t i = 0; i < str.size(); i++)
	{
		
		if (str[i]==symb)
		{
			result[i] = replacing_symb;
		}
	}
}
int main() {
	//string 
	string str = "Hhhd";
	for (int i = 0; i < str.size(); i++)
	{
		cout << i<<" - "<< str[i] << endl;
	}
	// (const char *)(string)
	const char* text = str.c_str();
	str+="HoHoHo";
	cout<<str<<endl;
	cout << "===========================" << endl;
	const char* text2 = "Rivne is COOL!";
	str = text2;
	int a = 67;
	str = to_string(a);
	str = "abbabbbacccc";
	int count = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == 'b')
		{
			++count;
		}
	}
	cout << count << endl;
	cout << "Delete all user symbols from string: " << endl;
	return 0;
}