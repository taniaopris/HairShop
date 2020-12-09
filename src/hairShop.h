#ifndef HAIRSHOP_H
#define HAIRSHOP_H

#include<iostream>
#include<list>
#include"product.h"

class HairShop{ //Singleton class

private:
    std::list<Product> products;

    //Item 14: Prohibit copying
    //Copy ctor and copy assigment op are private because HairShop class is Singleton and there is no need for multiple instances of this class
    HairShop(const HairShop&);
    HairShop& operator = (const HairShop&);

    static HairShop *instance;    
    //default ctor
    HairShop();
    //ctor with parameters
    HairShop(const std::list<Product>& prod);

public:
    
    //destructor
    ~HairShop();
    
    void listProducts(void);

    //Item 14: Prohibit copying
    static HairShop* getInstance(const std::list<Product>& prod);
    //Item 14: Prohibit copying
    static HairShop* getInstance();

};

#endif
