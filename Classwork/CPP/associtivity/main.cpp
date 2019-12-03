#include<iostream>
#include"Product.h"
#include"Inventory.h"
using namespace std;

int main()
{

Product p;
Inventory I;
p.Display();

Inventory I1("Available",80);

Product p1("screen","123",I1);

p1.Display();

return 0;
};
