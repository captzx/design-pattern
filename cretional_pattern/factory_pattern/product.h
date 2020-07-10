#pragma once

#include <iostream>
#include <memory>

enum ProductType { A, B, C, D };

// AbstractProduct
class AbstractProduct {

};
using AbstractProductPtr = std::shared_ptr<AbstractProduct>;

class ProductA: public AbstractProduct {
public:
	ProductA() {
		std::cout << "Create ProductA." << std::endl;
	}
};

class ProductB : public AbstractProduct {
public:
	ProductB() {
		std::cout << "Create ProductB." << std::endl;
	}
};

class ProductC : public AbstractProduct {
public:
	ProductC() {
		std::cout << "Create ProductC." << std::endl;
	}
};

class ProductD : public AbstractProduct {
public:
	ProductD() {
		std::cout << "Create ProductD." << std::endl;
	}
};

// AbstractProductA
class AbstractProductA {

};
using AbstractProductAPtr = std::shared_ptr<AbstractProductA>;

class ProductA1 : public AbstractProductA {
public:
	ProductA1() {
		std::cout << "Create ProductA1." << std::endl;
	}
};

class ProductA2 : public AbstractProductA {
public:
	ProductA2() {
		std::cout << "Create ProductA2." << std::endl;
	}
};

// AbstractProductB
class AbstractProductB {

};
using AbstractProductBPtr = std::shared_ptr<AbstractProductB>;

class ProductB1 : public AbstractProductB {
public:
	ProductB1() {
		std::cout << "Create ProductB1." << std::endl;
	}
};

class ProductB2 : public AbstractProductB {
public:
	ProductB2() {
		std::cout << "Create ProductB2." << std::endl;
	}
};