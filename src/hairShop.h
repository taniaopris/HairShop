#ifndef HAIRSHOP_H
#define HAIRSHOP_H

#include<iostream>
#include<list>
#include"product.h"

class HairShop{

private:
    std::list<Product> products;

    // Item 6: Explicitly disable the use of compiler generated functions you do not want
    // In this case, copy ctor and copy assigment operator are declared private and without an implementation
    HairShop(const HairShop&);
    HairShop& operator = (const HairShop&);

public:
    //default ctor
    HairShop();

    //ctor with parameters
    HairShop(const std::list<Product>& prod);

    //destructor
    ~HairShop();
    
    void listProducts(void);
};

#endif