#include"hairShop.h"
#include"product.h"
#include<list>


int main()
{
    Product p1(1, "Elseve", "condtioner", 10, 50);
    Product p2(2, "Pantene", "shampoo", 5, 30);
    Product p3(3, "Garnier", "mask", 20, 45);

    //Item 5: Know what functions C++ silently writes and calls
    //copy ctor is called here
    Product p4(p2); 
    std::cout<<"P4: "<<p4.getName()<<std::endl;
    std::cout<<"P2: "<<p2.getName()<<std::endl;

    // Item 6: Explicitly disable the use of compiler generated functions you do not want
    //error, copy assigment operator is private 
    //p1 = p2;

    std::list<Product> l;
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);

    HairShop h(l);

    h.listProducts();

    // Item 6: Explicitly disable the use of compiler generated functions you do not want
    //copy ctor for HairShop is private
    //HairShop h2 = h;
    //error, copy assigment operator is private
    //HairShop h2;
    //h2 = h;

    //Item 5: Know what functions C++ silently writes and calls.
    //Destructor is called for all created objects 
    return 0;
}
