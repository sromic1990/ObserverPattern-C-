//
// Created by Sourav Chatterjee on 2019-03-20.
//

#include <algorithm>
#include "ASubject.h"

void ASubject::Attach(Shop *product)
{
    list.push_back(product);
}

void ASubject::Detach(Shop *product)
{
    list.erase(std::remove(list.begin(), list.end(), product));
}

void ASubject::Notify(float price)
{
    for(std::vector<Shop*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(price);
        }
    }
}