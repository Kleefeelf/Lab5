#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

enum Type
{
	SHIRT,
	JEANS,
	JACKET,
	SHOES,
	HAT
};

class Clothing
{
public:

	Type type1;
	string name;
	string description, location, colour;
	int size, type = 0;
	Clothing() {}
	Clothing(string new_name, string new_description, string new_location, string new_colour, int new_size, int new_type)
	{
		name = new_name;
		description = new_description;
		location = new_location;
		colour = new_colour;
		size = new_size;
		type = new_type;
	};

	~Clothing() {};
};

class Wardrobe
{
public:

	int amount = 0;
	vector<Clothing> clothes;
	Wardrobe() { }
	int go_out();
	int add_clothing(Clothing Other);
	int sort_size();
	~Wardrobe() {}
};