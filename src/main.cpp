#include <iostream>
#include "DummyProduct.h"

int main(int argc, char* argv[])
{
    DummyProduct product;

    //We have four shops wanting to keep updated price set by product owner
    Shop shop1("Shop 1");
    Shop shop2("Shop 2");

    product.Attach(&shop1);
    product.Attach(&shop2);

    //Npw lets try changing the products price, this should update teh shops automatically
    product.ChangePrice(23.0f);

    //Now shop2 is not interested in new prices so they unsubscribe
    product.Detach(&shop2);

    //Now lets try changing the products price again
    product.ChangePrice(26.0f);

    getchar();
    return 0;
}