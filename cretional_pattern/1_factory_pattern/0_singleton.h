#pragma once

#include <memory>
#include <mutex>

template <typename T>
class Singleton {
public:
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

protected:
	Singleton() {}
	~Singleton() {}

public:
	static T& GetInstance() {
		std::call_once(_onceFlag, [&] { _instance = std::make_unique<T>(); });
		return *_instance;
	}

private:
	static std::once_flag _onceFlag;
	static std::unique_ptr<T> _instance;
};

template <typename T> std::once_flag Singleton<T>::_onceFlag;
template <typename T> std::unique_ptr<T> Singleton<T>::_instance;