#pragma once

#include "Product.h"

class Factory {
public:
	static ProductPtr CreateProduct(ProductType); // ͳһ�����ӿ�, ֻ��Ҫ��������Ҫ�Ĳ�Ʒ����, ���ܹ�������Ӧ�Ĳ�Ʒ
};
// �򵥹���: ʹ����Ĵ�����ʹ�÷��뿪��, ����չ����, ������������Ҫ�����Ĳ�Ʒ��С�ĳ���.