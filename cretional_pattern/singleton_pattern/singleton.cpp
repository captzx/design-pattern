#include "singleton.h"

#include <iostream>

class Test : public Singleton<Test> {
public:
	void Print() { std::cout << "Test Print." << std::endl; }
};

int main() {
	Test::GetInstance().Print();
	return 0;
}