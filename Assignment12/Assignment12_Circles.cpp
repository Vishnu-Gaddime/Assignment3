#include <iostream>
#include <algorithm>
#include "Assignment12_Circles.h"

using namespace std;

void Data::getData(int n)
{
	Circle circle;
	Cordinates cordinates;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the Radius of Circle " << i + 1 << endl;
		int radius;
		cin >> radius;
		circle.radius = radius;
		cout << "Enter the X and Y cordinate of Circle " << i + 1 << endl;
		int x, y;
		cin >> x >> y;
		cordinates.x = x;
		cordinates.y = y;
		circle.cordinate.emplace_back(cordinates);
		circles.emplace_back(circle);
		circle.cordinate.clear();
	}	
}

void Data::calculateArea()
{
	for (int i = 0; i < circles.size(); i++)
	{
		circles[i].area = 3.14 * circles[i].radius * circles[i].radius;
	}
}

void Data::printData()
{
	cout << "\n";
	sort(circles.begin(), circles.end(), [](Circle const& a, Circle const& b) { return a.area < b.area; });
	for (int i = 0; i < circles.size(); i++)
	{
		cout << "Circle " << i + 1 << " : " << endl;
		cout << "\t" << "Cordinate X - " << circles[i].cordinate[0].x << endl;
		cout << "\t" << "Cordinate Y - " << circles[i].cordinate[0].y << endl;
		cout << "\t" << "Radius - " << circles[i].radius<< endl;
		cout << "\t" << "Area - " << circles[i].area << endl;
	}
}

int main()
{
	Data circleData;
	int n;
	cout << "Enter the number of circles" << endl;
	cin >> n;
	circleData.getData(n);
	circleData.calculateArea();
	circleData.printData();
	return EXIT_SUCCESS;
}