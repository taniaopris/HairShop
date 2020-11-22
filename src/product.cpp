#include"product.h"

//default ctor
Product::Product()
//Item 4: Make sure that object are initialized before they're used.
:productID(0),
 productName(),
 productType(),
 productStock(0),
 productPrice(0)
 //These are initializations 
{
    //ctor body is "empty", no assigments
    std::cout<<"This is product default constructor!"<<std::endl;
}

//ctor with parameters
Product::Product(const int& productID, const std::string& productName, const std::string& productType, const int& productStock, const int& productPrice)
//Item 4: Make sure that object are initialized before they're used.
:productID(productID),
 productName(productName),
 productType(productType),
 productStock(productStock),
 productPrice(productPrice)
{
    std::cout<<"Product "<<productName<<" is initialized!"<<std::endl;
}

//destructor 
Product::~Product(){
    std::cout<<"Destructor of Product!"<<std::endl;
}

//copy ctor, needed in HairShop ctor for member initialization list
Product::Product(const Product& p)
:productID(p.productID),
productName(p.productName),
productType(p.productType),
productStock(p.productStock),
productPrice(p.productPrice)
{
    std::cout<<"Product is initialized with copy ctor!"<<std::endl;
}

Product& Product::operator = (const Product& p){

    // Item 11: Handle assignment to self in operator=.
    Product temp(p);
    swap(temp);
    return *this;
    // Item 10: Have assignment operators return a reference to *this.
}

void Product::swap(Product& p){

    this->productID = p.productID;
    this->productName = p.productName;
    this->productType = p.productType;
    this->productStock = p.productStock;
    this->productPrice = p.productPrice;
}

std::string Product::getName(){

    return productName;
}

int Product::getPrice(){

    return productPrice;
}