#include <iostream>
#include <vector>
using namespace std;
struct Product {
	string name;
	vector<string> composition;
	float price;
	void print() {
		cout << "Product: " << endl;
		cout << "Name: " << name<<" Price: "<<price<< endl;
	}
	Product(string name_, vector<string> composition_, float price_)
	{
		name = name_;
		composition = composition_;
		price = price_;
	}
	Product() {
		name = "NoName";
		price = 0;
	}
};
struct Shop {
	string name;
	vector<Product> products;
	void print() {
		cout << "Name of shop: " << name << endl;
		for (auto& el : products)
		{
			el.print();
		}
	}
};
int main() {
	Product chipster("Lay`s", { "Potato", "Chemistry","Oil" },30.50f);
	//chipster.print();
	Shop shop;
	shop.name = "23/7";
	shop.products.push_back(chipster);
	shop.products.push_back(Product("Bread", {"flour,eggs"},18));
	shop.print();
	return 0;
}