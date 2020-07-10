#include "abstract_factory_method.h"

AbstractProductPtr FactoryMethod1::CreateProduct(ProductType type) {
	switch (type)
	{
	case A: return std::make_shared<ProductA>(); break;
	case B: return std::make_shared<ProductB>(); break;
	default:
		std::cout << "No This Product!" << std::endl;
		break;
	}

	return nullptr;
}

AbstractProductPtr FactoryMethod2::CreateProduct(ProductType type) {
	switch (type)
	{
	case C: return std::make_shared<ProductC>(); break;
	case D: return std::make_shared<ProductD>(); break;
	default:
		std::cout << "No This Product!" << std::endl;
		break;
	}

	return nullptr;
}

int main() {
	AbstractFactoryMethodPtr pFactory1 = std::make_shared<FactoryMethod1>();
	AbstractFactoryMethodPtr pFactory2 = std::make_shared<FactoryMethod2>();

	AbstractProductPtr pProductA = pFactory1->CreateProduct(A);
	AbstractProductPtr pProductB = pFactory2->CreateProduct(B);

	return 0;
}