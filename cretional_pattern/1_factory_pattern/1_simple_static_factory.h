#pragma once

#include "product.h"

class Factory {
public:
	static AbstractProductPtr CreateProduct(ProductType); // 统一创建接口, 只需要传入所需要的产品类型, 就能够过得相应的产品
};
// 简单工厂: 使对象的创建和使用分离开来, 但扩展困难, 仅适用于所需要创建的产品较小的场景.