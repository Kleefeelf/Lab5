#include "clothes.h"
#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    Wardrobe clothes(n);
    Clothing shirt("shirt", "top wear", "Ukraine", "green", 68, SHIRT);
    Clothing jeans("jeans", "clothes for your legs", "Ukraine", "green", 39, JEANS);
    Clothing jacket("jacket", "top wear", "Ukraine", "green", 47, JACKET);
    Clothing shirt2("shirt", "top wear", "Ukraine", "green", 68, SHIRT);
    Clothing shoes("shoes", "clothes for your foot", "Ukraine", "green", 40, SHOES);
    Clothing hat("hat", "head wear", "Ukraine", "green", 10, HAT);

    clothes.add_clothing(shirt);
    clothes.add_clothing(jeans);
    clothes.add_clothing(jacket);
    clothes.add_clothing(shoes);
    clothes.add_clothing(hat);

    Clothing* wardrobe = clothes.getClothing();
    
    int a = goOut(wardrobe, n);

    int sort2[] = { shirt.size, jeans.size, jacket.size, shoes.size, hat.size, shirt2.size };
    sort(sort2, sort2 + n);
    for (int i = 0; i < n; i++)
    {
        cout << sort2[i]<< " ";
    }
    return 0;

}


