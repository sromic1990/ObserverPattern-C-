//
// Created by Sourav Chatterjee on 2019-03-20.
//

#include "Shop.h"

Shop::Shop(std::string name)
{
    this->name = name;
}

void Shop::Update(float price)
{
    this->price = price;

    //Lets print on the console just to test the working
    std::cout << "Price at "<< name << " is now "<< price << "\n";
}

