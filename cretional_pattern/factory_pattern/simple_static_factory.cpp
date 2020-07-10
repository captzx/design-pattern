#include "simple_static_factory.h"

AbstractProductPtr Factory::CreateProduct(ProductType type) {
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
	AbstractProductPtr pProductA = Factory::CreateProduct(A);
	AbstractProductPtr pProductB = Factory::CreateProduct(B);

	return 0;
}