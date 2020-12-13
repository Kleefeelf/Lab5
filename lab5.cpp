#include "clothes.h"
#include <iostream>

using namespace std;

int main()
{
    Wardrobe closet;
    Clothing shirt("shirt", "top wear", "Ukraine", "green", 68, SHIRT);
    Clothing jeans("jeans", "clothes for your legs", "Ukraine", "green", 39, JEANS);
    Clothing jacket("jacket", "top wear", "Ukraine", "green", 47, JACKET);
    Clothing shirt2("shirt", "top wear", "Ukraine", "green", 68, SHIRT);
    Clothing shoes("shoes", "clothes for your foot", "Ukraine", "green", 40, SHOES);
    Clothing hat("hat", "head wear", "Ukraine", "green", 10, HAT);

    closet.add_clothing(shirt);
    closet.add_clothing(jeans);
    closet.add_clothing(jacket);
    closet.add_clothing(shirt2);
    closet.add_clothing(shoes);
    closet.add_clothing(hat);
    closet.sort_size();
    closet.go_out();

    return 0;

}
