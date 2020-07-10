#pragma once

#include <map>
#include <memory>
#include <iostream>

class Subject;
class Product;

class Observer {
public:
	explicit Observer(uint32_t id) : id(id) {}
	virtual ~Observer() {}

public:
	virtual void ReceiveNews(const Subject*, const Product&) = 0;
	virtual uint32_t GetID() { return id; }
private:
	uint32_t id;
};
using ObserverSPtr = std::shared_ptr<Observer>;
using ObserverWPtr = std::weak_ptr<Observer>;

class ActivelyObserver : public Observer{
public:
	explicit ActivelyObserver(uint32_t id) : Observer(id) {}
public:
	void ReceiveNews(const Subject* subject, const Product& product);
};

class InsipidObserver : public Observer {
public:
	explicit InsipidObserver(uint32_t id) : Observer(id) {}

public:
	void ReceiveNews(const Subject* subject, const Product& product);
};