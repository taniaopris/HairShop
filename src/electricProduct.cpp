#include"electricProduct.h"

//default ctor
ElectricProduct::ElectricProduct()
:Product(),
powerW(0)
{
    //ctor body is "empty", no assigments
    std::cout<<"This is electric product default constructor!"<<std::endl;
}

//ctor with parameters
ElectricProduct::ElectricProduct(const int& productID, const std::string& productName, const std::string& productType, const int& productStock, const int& productPrice, const int& powerW)
// Item 12: Copy all parts of an object.
:Product(productID, productName, productType, productStock, productPrice),
powerW(powerW)
{
    std::cout<<"Product "<<productName<<" is initialized!"<<std::endl;
}

//copy ctor
ElectricProduct::ElectricProduct(const ElectricProduct& p)
// Item 12: Copy all parts of an object.
:Product(p),
powerW(p.powerW)
{
    std::cout<<"ElectricProduct is initialized with ctor!"<<std::endl;
}

//copy assigment operator
ElectricProduct& ElectricProduct::operator= (const ElectricProduct& p){

    // Item 12: Copy all parts of an object.
    Product::operator=(p);
    powerW = p.powerW;
    return *this;
    // Item 10: Have assignment operators return a reference to *this.
}

//destructor 
ElectricProduct::~ElectricProduct(){
    std::cout<<"Destructor of ElectricProduct!"<<std::endl;
}


int ElectricProduct::getPowerW(){

    return powerW;
}
