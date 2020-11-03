#include"hairShop.h"

//default ctor
HairShop::HairShop()
//Item 4: Make sure that object are initialized before they're used.
:products()
//This is member initialization list
{
    //ctor body is "empty", no assigments
    std::cout<<"This is HairShop default constructor!"<<std::endl;
}

//ctor with parameters
HairShop::HairShop(const std::list<Product>& products)
//Item 4: Make sure that object are initialized before they're used.
//Item 5: Know what functions C++ silently writes and calls.
//Each list element will call the Product copy ctor
:products(products)
{
    std::cout<<"This is HairShop constructor!"<<std::endl;
}

//destructor
HairShop::~HairShop(){
    std::cout<<"Destructor of HairShop!"<<std::endl;
}

void HairShop::listProducts(void)
{
    for( Product& p : products)
    {
        std::cout<<"Name "<<p.getName()<<", price: "<<p.getPrice()<<std::endl;
    }
}