#pragma once

#include "product.h"

class AbstractFactory {
public:
	virtual AbstractProductAPtr CreateProductA() = 0;
	virtual AbstractProductBPtr CreateProductB() = 0;
};
using AbstractFactoryPtr = std::shared_ptr<AbstractFactory>;

class Factory1 : public AbstractFactory {
public:
	AbstractProductAPtr CreateProductA() override;
	AbstractProductBPtr CreateProductB() override;
};

class Factory2 : public AbstractFactory {
public:
	AbstractProductAPtr CreateProductA() override;
	AbstractProductBPtr CreateProductB() override;
};