#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>

class Product{

private:

    int productID;
    std::string productName;
    std::string productType;
    int productStock;
    int productPrice;

    // Item 6: Explicitly disable the use of compiler generated functions you do not want
    // In this case, copy assigment operator is declared private and without an implementation
    Product& operator = (const Product&);

public:
    //Item 5: Know what functions C++ silently writes and calls.
    //copy ctor
    Product(const Product&);

    //default ctor
    Product();

    //ctor with parameters
    Product(const int& productID, const std::string& productName, const std::string& productType, const int& productStock, const int& productPrice);

    //destructor
    ~Product();
    
    std::string getName();
    int getPrice();

};

#endif