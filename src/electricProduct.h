#ifndef ELECTRICPRODUCT_H
#define ELECTRICPRODUCT_H

#include<iostream>
#include"product.h"

class ElectricProduct:public Product{

private:
    int powerW;

public:
    
    //copy ctor
    ElectricProduct(const ElectricProduct&);

    //default ctor
    ElectricProduct();

    //ctor with parameters
    ElectricProduct(const int& productID, const std::string& productName, const std::string& productType, const int& productStock, const int& productPrice, const int& powerW);

    //copy assigment operator
    ElectricProduct& operator = (const ElectricProduct&);

    //destructor
    ~ElectricProduct();

    int getPowerW();
};

#endif