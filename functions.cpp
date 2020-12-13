#include "clothes.h"
#define OFF 0
#define ON 1

int Wardrobe::add_clothing(Clothing other)
{
	clothes.push_back(other);
	amount++;
	return 0;
}

int Wardrobe::sort_size()
{
	int temp;
	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < amount - i - 1; j++)
		{
			if (clothes.at(j).size > clothes.at(j + 1).size)
			{
				temp = clothes.at(j).size;
				clothes.at(j).size = clothes.at(j + 1).size;
				clothes.at(j + 1).size = temp;
			}
		}
	}

	for (int i = 0; i < amount; i++)
	{
		cout << clothes.at(i).size << endl;
	}
	return 0;
}

int Wardrobe::go_out()
{
	Type type;
	int counter = 0;
	bool checker_shirt = OFF;
	bool checker_jeans = OFF;
	bool checker_jacket = OFF;
	bool checker_shoes = OFF;
	bool checker_hat = OFF;
	for (int i = 0; i < amount; i++) {
		switch (clothes.at(i).type) {
		case SHIRT:
			if (checker_shirt == OFF) {
				counter++;
				checker_shirt = ON;;
			}
			break;
		case JEANS:
			if (checker_jeans == OFF) {
				counter++;
				checker_jeans = ON;
			}
			break;
		case JACKET:
			if (checker_jacket == OFF) {
				counter++;
				checker_jacket = ON;
			}
			break;
		case SHOES:
			if (checker_shoes == OFF) {
				counter++;
				checker_shoes = ON;
			}
			break;
		case HAT:
			if (checker_hat == OFF) {
				counter++;
				checker_hat = ON;
			}
			break;
		}
	}
	cout << "\nAmount of clothes types:  " << counter << endl;

	if (counter > 3) {
		cout << "you can go out" << endl;
	}
	else
		cout << "you can't" << endl;

	return counter;
}
