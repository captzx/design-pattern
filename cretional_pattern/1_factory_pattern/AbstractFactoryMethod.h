#pragma once

#include "Product.h"

class AbstractFactory {
public:
	virtual ProductPtr CreateProduct(ProductType) = 0;
};

using FactoryPtr = std::shared_ptr<AbstractFactory>;

class Factory1 : public AbstractFactory {
public:
	ProductPtr CreateProduct(ProductType) override;
};

class Factory2 : public AbstractFactory {
public:
	ProductPtr CreateProduct(ProductType) override;
};