#pragma once

#include "product.h"

class AbstractFactoryMethod {
public:
	virtual AbstractProductPtr CreateProduct(ProductType) = 0;
};
using AbstractFactoryMethodPtr = std::shared_ptr<AbstractFactoryMethod>;

class FactoryMethod1: public AbstractFactoryMethod {
public:
	AbstractProductPtr CreateProduct(ProductType) override;
};

class FactoryMethod2 : public AbstractFactoryMethod {
public:
	AbstractProductPtr CreateProduct(ProductType) override;
};