#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Cordinates
{
	public:
		int x, y;
};

class Circle
{
	public:
		int radius;
		float area = 0;
		vector<Cordinates> cordinate;
};

class Data
{
	public:
		vector<Circle> circles;

		void getData(int n);
		void calculateArea();
		void printData();
};