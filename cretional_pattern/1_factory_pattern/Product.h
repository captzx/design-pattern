#pragma once

#include <iostream>
#include <memory>

enum ProductType { // 新增产品, 需要修改逻辑, 违背开闭原则, 扩展困难
	A,B,C,D,E,F,G
};

class AbstractProduct { // 但需要被创建的产品隶属于同一个父类
protected:
	ProductType _type;
};

using ProductPtr = std::shared_ptr<AbstractProduct>;

class ProductA : public AbstractProduct {
public:
	ProductA() {
		_type = A;
		std::cout << "Create ProductA." << std::endl;
	}
};

class ProductB : public AbstractProduct {
public:
	ProductB() {
		_type = B;
		std::cout << "Create ProductB." << std::endl;
	}
};

class ProductC : public AbstractProduct {
public:
	ProductC() {
		_type = C;
		std::cout << "Create ProductC." << std::endl;
	}
};

class ProductD : public AbstractProduct {
public:
	ProductD() {
		_type = D;
		std::cout << "Create ProductD." << std::endl;
	}
};

class ProductE : public AbstractProduct {
public:
	ProductE() {
		_type = E;
		std::cout << "Create ProductE." << std::endl;
	}
};

class ProductF : public AbstractProduct {
public:
	ProductF() {
		_type = F;
		std::cout << "Create ProductF." << std::endl;
	}
};

class ProductG : public AbstractProduct {
public:
	ProductG() {
		_type = G;
		std::cout << "Create ProductG." << std::endl;
	}
};