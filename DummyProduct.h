//
// Created by Sourav Chatterjee on 2019-03-20.
//

#ifndef OBSERVERPATTERN_DUMMYPRODUCT_H
#define OBSERVERPATTERN_DUMMYPRODUCT_H

#include "ASubject.h"

class DummyProduct : public ASubject
{
public:
    void ChangePrice(float price);
};

#endif //OBSERVERPATTERN_DUMMYPRODUCT_H
