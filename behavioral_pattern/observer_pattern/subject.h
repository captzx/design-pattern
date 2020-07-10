#pragma once

#include <map>

#include "observer.h"

class Product {
public:
	Product(uint32_t id, uint32_t type, uint32_t price) :id(id), type(type), price(price) {

	}

	const uint32_t GetID() const { return id; }
private:
	uint32_t id;
	uint32_t type;
	uint32_t price;
};

class Subject {
public:
	virtual ~Subject() {}

public:
	void AddObserver(const ObserverSPtr& pObserver) {
		if (observers.find(pObserver->GetID()) != observers.end()) return;
		
		observers.insert({ pObserver->GetID(), pObserver });
	}
	void DelObserver(const ObserverSPtr& pObserver) {
		auto it = observers.find(pObserver->GetID());
		if (it != observers.end()) observers.erase(it);
	}
	void NotifyAll(const Product& product) {
		for (auto it : observers) {
			if (!it.second.expired()) {
				ObserverSPtr pObserver = it.second.lock();
				pObserver->ReceiveNews(this, product);
			}
		}
	}

public:
	virtual void PublishPruduct(const Product& newProduct) = 0;
	virtual const std::string GetName() const = 0;

private:
	std::map<uint32_t, ObserverWPtr> observers;
};

class AppleCompany : public Subject {
public:
	void PublishPruduct(const Product& newProduct) override {
		products.insert({ newProduct.GetID(), newProduct });

		std::cout << GetName() << " publish new pruduct " << newProduct.GetID() << std::endl;

		NotifyAll(newProduct);
	}
	const std::string GetName() const override { return "Apple Company"; }

private:
	std::map<uint32_t, Product> products;
};