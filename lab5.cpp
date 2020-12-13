#include "clothes.h"
#include <iostream>

using namespace std;

int main()
{
    Wardrobe Closet;
    Clothing Shirt("shirt", "top wear", "Ukraine", "green", 68, SHIRT);
    Clothing Jeans("jeans", "clothes for your legs", "Ukraine", "green", 39, JEANS);
    Clothing Jacket("jacket", "top wear", "Ukraine", "green", 47, JACKET);
    Clothing Shirt2("shirt", "top wear", "Ukraine", "green", 68, SHIRT);
    Clothing Shoes("shoes", "clothes for your foot", "Ukraine", "green", 40, SHOES);
    Clothing Hat("hat", "head wear", "Ukraine", "green", 10, HAT);

    Closet.add_clothing(Shirt);
    Closet.add_clothing(Jeans);
    Closet.add_clothing(Jacket);
    Closet.add_clothing(Shirt2);
    Closet.add_clothing(Shoes);
    Closet.add_clothing(Hat);
    Closet.sort_size();
    Closet.go_out();

    return 0;

}
