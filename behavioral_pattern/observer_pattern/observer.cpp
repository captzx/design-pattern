#include "observer.h"
#include "subject.h"

void ActivelyObserver::ReceiveNews(const Subject * subject, const Product & product) {
	std::cout << "ActivelyObserver: I'm so excited!" << std::endl;
}

void InsipidObserver::ReceiveNews(const Subject * subject, const Product & product) {
	std::cout << "IUnsipidObserver: emmm... ok!" << std::endl;
}

int main() {
	ObserverSPtr ao = std::make_shared<ActivelyObserver>(1);
	ObserverSPtr io = std::make_shared<InsipidObserver>(2);

	AppleCompany appleCompany;
	appleCompany.AddObserver(ao);
	appleCompany.AddObserver(io);

	Product product(1, 2, 3);
	appleCompany.PublishPruduct(product);

	ObserverSPtr ao2 = std::make_shared<ActivelyObserver>(3);
	appleCompany.AddObserver(ao2);

	Product product2(2, 2, 3);
	appleCompany.PublishPruduct(product2);

	return 0;
}
