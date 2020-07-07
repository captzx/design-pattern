#include "SampleFactory.h"

ProductPtr Factory::CreateProduct(ProductType type) {
	switch (type)
	{
	case A: return std::make_shared<ProductA>(); break;
	case B: return std::make_shared<ProductB>(); break;
	default:
		break;
	}

	return nullptr;
}

int main() {
	ProductPtr pProductA = Factory::CreateProduct(A);
	ProductPtr pProductB = Factory::CreateProduct(B);

	return 0;
}