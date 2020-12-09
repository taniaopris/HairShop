#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
#include <locale>
#include <memory>

class Product{

private:

    int productID;
    std::string productName;
    std::string productType;
    int productStock;
    int productPrice;

protected:

    void swap(Product& p);

public:
    //Item 5: Know what functions C++ silently writes and calls.
    //copy ctor
    Product(const Product&);

    //default ctor
    Product();

    //ctor with parameters
    Product(const int& productID, const std::string& productName, const std::string& productType, const int& productStock, const int& productPrice);

    //copy assigment operator
    Product& operator = (const Product&);

    //destructor
    ~Product();
    
    std::string getName();
    int getPrice();

    //Item 13: Use objects to manage resources
    void getCheaperPrice();

};

#endif
