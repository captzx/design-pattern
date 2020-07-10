#include "abstract_factory.h"


AbstractProductAPtr Factory1::CreateProductA() {
	return std::make_shared<ProductA1>();
}
AbstractProductBPtr Factory1::CreateProductB() {
	return std::make_shared<ProductB1>();
}

AbstractProductAPtr Factory2::CreateProductA() {
	return std::make_shared<ProductA2>();

}
AbstractProductBPtr Factory2::CreateProductB() {
	return std::make_shared<ProductB2>();
}

int main() {
	AbstractFactoryPtr pFactory1 = std::make_shared<Factory1>();
	AbstractFactoryPtr pFactory2 = std::make_shared<Factory2>();

	AbstractProductAPtr pProductA = pFactory1->CreateProductA();
	AbstractProductBPtr pProductB = pFactory1->CreateProductB();
	pProductA = pFactory2->CreateProductA();
	pProductB = pFactory2->CreateProductB();

	return 0;
}