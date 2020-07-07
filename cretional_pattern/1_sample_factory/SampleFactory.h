#pragma once

#include <iostream>
#include <memory>

enum ProductType // 新增产品, 需要修改逻辑, 违背开闭原则, 扩展困难
{
	A,
	B,
};

class Product { // 但需要被创建的产品隶属于同一个父类
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
	static ProductPtr CreateProduct(ProductType); // 统一创建接口, 只需要传入所需要的产品类型, 就能够过得相应的产品
};
// 简单工厂: 使对象的创建和使用分离开来, 但扩展困难, 仅适用于所需要创建的产品较小的场景.