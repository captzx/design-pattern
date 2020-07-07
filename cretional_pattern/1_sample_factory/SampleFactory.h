#pragma once

#include <iostream>
#include <memory>

enum ProductType // ������Ʒ, ��Ҫ�޸��߼�, Υ������ԭ��, ��չ����
{
	A,
	B,
};

class Product { // ����Ҫ�������Ĳ�Ʒ������ͬһ������
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
	static ProductPtr CreateProduct(ProductType); // ͳһ�����ӿ�, ֻ��Ҫ��������Ҫ�Ĳ�Ʒ����, ���ܹ�������Ӧ�Ĳ�Ʒ
};
// �򵥹���: ʹ����Ĵ�����ʹ�÷��뿪��, ����չ����, ������������Ҫ�����Ĳ�Ʒ��С�ĳ���.