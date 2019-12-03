#include<iostream>
#include"Product.h"
#include"Inventory.h"
using namespace std;

int main()
{

Inventory *I = nullptr;
Product p;
I = &p;

I->Display();
I->Accept();

return 0;
};
