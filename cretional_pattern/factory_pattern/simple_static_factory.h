#pragma once

#include "product.h"

class Factory {
public:
	static AbstractProductPtr CreateProduct(ProductType); // ͳһ�����ӿ�, ֻ��Ҫ��������Ҫ�Ĳ�Ʒ����, ���ܹ�������Ӧ�Ĳ�Ʒ
};
// �򵥹���: ʹ����Ĵ�����ʹ�÷��뿪��, ����չ����, ������������Ҫ�����Ĳ�Ʒ��С�ĳ���.