#include"hairShop.h"
#include"product.h"
#include"electricProduct.h"
#include<list>


int main()
{
    Product p1(1, "Elseve", "condtioner", 10, 50);
    Product p2(2, "Pantene", "shampoo", 5, 30);
    Product p3(3, "Garnier", "mask", 20, 45);
    ElectricProduct p4(4, "Babyliss", "hairdryer", 3, 200, 1000);
    ElectricProduct p5(5, "Philips", "hair straightener", 5, 300, 1500);

    p1 = p1;
    p5 = p5;
    std::cout<<"P1: "<<p1.getName()<<std::endl;
    std::cout<<"P5: "<<p5.getName()<<std::endl;

    std::list<Product> l;
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);

    // HairShop* h = HairShop::getInstance();

    HairShop* h = HairShop::getInstance(l);

    h->listProducts();

    p1.getCheaperPrice();
    p2.getCheaperPrice();

    return 0;
}
