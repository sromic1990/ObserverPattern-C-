//
// Created by Sourav Chatterjee on 2019-03-20.
//

#ifndef OBSERVERPATTERN_IOBSERVER_H
#define OBSERVERPATTERN_IOBSERVER_H

class IObserver
{
public:
    virtual void Update(float price) = 0;
};

#endif //OBSERVERPATTERN_IOBSERVER_H
