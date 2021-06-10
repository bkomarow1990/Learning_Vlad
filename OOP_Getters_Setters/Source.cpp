#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
	size_t id;
	static size_t id_counter;
	string author;
	string name;
	size_t year_of_publication;
	float price;
	size_t count_of_pages;
	string theme;
public:

	void setAuthor(const string& author) {
		if (author.empty())
		{
			return;
		}
		this->author = author;
	}
	const string& getAuthor()const {
		cout << "Test" << endl;
		 return author;
	}
	Book(string author, string name, size_t  year_of_publication, float price, size_t count_of_pages, string theme)
	{
		id = ++id_counter;
	}
	Book()
	{
		id = ++id_counter;
	}
};
size_t Book::id_counter = 0;
class Library {
};
class Fraction {
	int num;
	int denom;
	static string name;
};
string Fraction::name = "Fract";
int main() {
	vector<Book> books;
	books.push_back(Book());// id_counter = 1;
	books.push_back(Book());// id_counter = 2;
	books.push_back(Book());// id_counter = 3;
	books[0].getAuthor() = "Roma";
	cout << books[0].getAuthor() << endl;
	/*for (size_t i = 0; i < books.size(); i++)
	{
		cout << "-----------------------" << endl;
		cout<<"Id: "<<books[i].id<<" ";
		if (i == 1)
		{
			Book::id_counter = 10;
			books.push_back(Book());
		}
		cout<<"Id Counter: "<<books[i].id_counter<<" "<<endl;
	}*/

	return 0;
}