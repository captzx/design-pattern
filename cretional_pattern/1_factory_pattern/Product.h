#pragma once

#include <iostream>
#include <memory>

enum ProductType { // ������Ʒ, ��Ҫ�޸��߼�, Υ������ԭ��, ��չ����
	A,B,C,D,E,F,G
};

class AbstractProduct { // ����Ҫ�������Ĳ�Ʒ������ͬһ������
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