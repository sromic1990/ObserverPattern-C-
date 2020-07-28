//
// Created by Sourav Chatterjee on 2019-03-20.
//

#ifndef OBSERVERPATTERN_SHOP_H
#define OBSERVERPATTERN_SHOP_H

#include <iostream>
#include <string>
#include "IObserver.h"

class Shop : IObserver
{
private:
    //Name of the shop
    std::string name;
    float price;

public:
    Shop(std::string name);
    void Update(float price);
};

#endif //OBSERVERPATTERN_SHOP_H
