#include "AbstractFactoryMethod.h"

ProductPtr Factory1::CreateProduct(ProductType type) {
	switch (type)
	{
	case A: return std::make_shared<ProductA>(); break;
	case B: return std::make_shared<ProductB>(); break;
	case C: return std::make_shared<ProductC>(); break;
	default:
		std::cout << "No This Product!" << std::endl;
		break;
	}

	return nullptr;
}

ProductPtr Factory2::CreateProduct(ProductType type) {
	switch (type)
	{
	case D: return std::make_shared<ProductD>(); break;
	case E: return std::make_shared<ProductE>(); break;
	case F: return std::make_shared<ProductF>(); break;
	default:
		std::cout << "No This Product!" << std::endl;
		break;
	}

	return nullptr;
}

int main() {
	FactoryPtr pFactory1 = std::make_shared<Factory1>();
	FactoryPtr pFactory2 = std::make_shared<Factory2>();

	ProductPtr pProductA = pFactory1->CreateProduct(A);
	ProductPtr pProductB = pFactory2->CreateProduct(B);

	return 0;
}