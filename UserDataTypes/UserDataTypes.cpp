// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

	using namespace std;

class Sandwich
{
public:
	void Read()
	{
		cout << "enter name: ";
		cin >> name;
	}
	void write();
	
private:
	std::string name;
	float price;
	bool isHot;
};

void Sandwich::write()
{
	cout << "name: " << name << endl;
}
struct Point
{
	int x;
	int y;

};
int main()
{
	int mx;
	int my;

	Point point;
	point.x = 300;
	point.y = 200;

	Sandwich sandwich;
	sandwich.Read();
	sandwich.write();

}

