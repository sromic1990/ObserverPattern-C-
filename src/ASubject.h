//
// Created by Sourav Chatterjee on 2019-03-20.
//

#ifndef OBSERVERPATTERN_ASUBJECT_H
#define OBSERVERPATTERN_ASUBJECT_H

#include "Shop.h"
#include <vector>
#include <list>

class ASubject
{
private:
    //Lets keep a track of all the shops we are observing
    std::vector<Shop*> list;

public:
    void Attach(Shop *product);
    void Detach(Shop *product);
    void Notify(float price);
};


#endif //OBSERVERPATTERN_ASUBJECT_H
