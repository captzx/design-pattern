#pragma once

#include <iostream>
#include <memory>

enum ProductType
{
	A,
	B,
};

class Product { // 简单工厂: 需要被创建的产品隶属于同一个父类
protected:
	ProductType _type;
};

class ProductA : public Product {
public:
	ProductA() { 
		_type = A;
		std::cout << "Create ProductA." << std::endl; 
	}
};

class ProductB : public Product {
public:
	ProductB() {
		_type = B;
		std::cout << "Create ProductB." << std::endl; 
	}
};

using ProductPtr = std::shared_ptr<Product>;

class Factory {
public:
	static ProductPtr CreateProduct(ProductType);
};