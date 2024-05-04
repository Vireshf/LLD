#include <iostream>
#include "models/Product.h"
#include "models/Inventory.h"
#include "models/VendingMachine.h"
#include "Exceptions/HandleDispenseChangeException.h"
#include "Exceptions/InvalidMoveByUser.h"
#include "Exceptions/ProductNotAvailableException.h"
#include "Exceptions/SpaceNotAvailableException.h"

int main() {

    try
    {
    Product *harshies = new Product();
    harshies->setId(1);
    harshies->setName("harshies_chocolate");
    harshies->setPrice(5.0);

    Product *parle = new Product();
    parle->setId(2);
    parle->setName("parle_chocolate");
    parle->setPrice(2.0);

    Product *mangobite = new Product();
    mangobite->setId(3);
    mangobite->setName("mangobite toffee");
    mangobite->setPrice(1.0);

    VendingMachine *pVendingMachine = new VendingMachine(3);
    pVendingMachine->getInventory()->addProduct(harshies);
    pVendingMachine->getInventory()->addProduct(harshies);
    pVendingMachine->getInventory()->addProduct(harshies);
    pVendingMachine->getInventory()->addProduct(harshies);

    pVendingMachine->getInventory()->addProduct(parle);
    pVendingMachine->getInventory()->addProduct(parle);
    pVendingMachine->getInventory()->addProduct(parle);
    pVendingMachine->getInventory()->addProduct(parle);

    pVendingMachine->getInventory()->addProduct(mangobite);

    pVendingMachine->insertCoin(6);
    pVendingMachine->pressButton(1);

    pVendingMachine->insertCoin(4);
    pVendingMachine->insertCoin(5);
    pVendingMachine->pressButton(2);

    pVendingMachine->insertCoin(2);
    pVendingMachine->insertCoin(3);
    pVendingMachine->pressButton(3);

    }
    catch(HandleDispenseChangeException *e)
    {
        std::cout<<e->what()<<std::endl;
    }
    catch(InvalidMoveByUserException *e)
    {
        std::cout<<e->what()<<std::endl;
    }
    catch(ProductNotAvailableException *e)
    {
        std::cout<<e->what()<<std::endl;
    }
    catch(SpaceNotAvailableException *e)
    {
        std::cout<<e->what()<<std::endl;
    }
    return 0;
}
