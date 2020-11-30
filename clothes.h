#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#define OFF 0
#define ON 1

using namespace std;

enum Type
{
	SHIRT,
	JEANS,
	JACKET,
	SHOES,
	HAT
};

class  Clothing
{
private:
	Type type1;
public:
	string name;
	string description;
	string location;
	string colour;
    int size;
	int type;
	Clothing () {}
	Clothing(string a, string b, string c, string d, int e, int te)
	{
		name = a;
		description = b;
		location = c;
		colour = d;
		size = e;
		type = te;
	};
	~Clothing() {};
};

class Wardrobe 
{
private:
	Clothing* wardrobe;
	int amount;
	int i = 0;
public:
	Wardrobe() {};
	Clothing* getClothing(void) {
		return wardrobe;
	}

	Wardrobe(int a) {
		amount = a;
		wardrobe = new Clothing[amount];
	}
	~Wardrobe() {};
	void add_clothing(Clothing war) {
		wardrobe[i] = war;
		i++;
	}
};

int goOut(Clothing* wardrobe, int amount)
{
	Type type;
	int counter = 0;
	bool checker_shirt = OFF;
	bool checker_jeans = OFF;
	bool checker_jacket= OFF;
	bool checker_shoes= OFF;
	bool checker_hat = OFF;
	for (int i = 0; i < amount; i++) {
		switch (wardrobe[i].type) {
		case SHIRT:
			if (checker_shirt == OFF) {
				counter++;
				checker_shirt = ON;;
			}
			break;
		case JEANS:
			if (checker_jeans == OFF) {
				counter++;
				checker_jeans = ON;;
			}
			break;
		case JACKET:
			if (checker_jacket == OFF) {
				counter++;
				checker_jacket = ON;;
			}
			break;
		case SHOES:
			if (checker_shoes == OFF) {
				counter++;
				checker_shoes = ON;;
			}
			break;
		case HAT:
			if (checker_hat == OFF) {
				counter++;
				checker_hat = ON;;
			}
			break;
		}
	}
	cout <<"\n Amount of Clothes:  " << counter << endl;	
	
	if (counter > 3) {
		cout << "you can go out" << endl;
	}
	else
		cout << "you can't" << endl;

	return counter;
}
