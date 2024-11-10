#include <iostream>

using namespace std;

class Item
{
    public: 
        Item();
        Item(int n);
        ~Item(); 
};

class Item_simple: public Item 
{
    int x; 
    public:
        Item_simple();
        Item_simple(int n); 
        ~Item_simple();
};

class Item_complexe: public Item
{
    public:
        Item_complexe();
        Item_complexe(int n); 
        ~Item_complexe();
    private: 
        Item_simple c;
};

Item::Item()
{cout << "It::It()" << endl;}

Item::Item(int n)
{cout << "It::It(" << n << ")" << endl;}

Item::~Item()
{cout << "It::~It()" << endl;}

Item_complexe::Item_complexe()
{cout << "Ic::Ic()" << endl;}

Item_complexe::Item_complexe(int n):Item(5*n)
{cout << "Ic::Ic(" << n << ")"<< endl;}

 Item_complexe::~Item_complexe()
{cout << "Ic::~Ic()" << endl;}

Item_simple::Item_simple()
{cout << "Is::Is()" << endl;}

 Item_simple::Item_simple(int n)
{cout << "Is::Is(" << n << ")"<< endl;}

 Item_simple::~Item_simple()
{cout << "Is::~Is()" << endl;}

int main()
{
Item it;
Item_complexe* pitc;
Item_complexe itcplx(10);
cout << "0------" << endl;
it = Item(30);
cout << "1------" << endl;
pitc = new Item_complexe;
cout << "2------" << endl;
delete pitc;
cout << "3------" << endl;
return 0;
}