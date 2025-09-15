#include <iostream>
using namespace std;

class laptop
{
	char* model;
	char* color;
	double price;
public:
	laptop(const char *mod,const char *col, double pr)
	{
		model = new char[strlen(mod) + 1];
		strcpy_s(model,strlen(mod) + 1, mod);
		color = new char[strlen(col) + 1];
		strcpy_s(color, strlen(col) + 1, col);
		price = pr;
	}
	void Print()
	{
		cout << "model:" << model << "color:" << color << "price:" << price << endl;
	}
	~laptop()
	{
		delete[] model;
		delete[] color;
	}
};
int main()
{
	laptop obj1("HP", " blue", 2000);
	obj1.Print();
	laptop obj2("lenovo", "yellow", 2000);
	obj2.Print();
	laptop obj3("Apple", "green ", 2000);
	obj3.Print();
}