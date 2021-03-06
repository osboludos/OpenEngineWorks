#pragma once

#include <functional>
#include <vector>
#include <utility>
#include <algorithm>

template<typename... T>
class Event {
public:
	typedef std::function<void(T...)> EventListener;
private:
	std::vector<EventListener *> listeners;
public:

	void operator+=(EventListener *listener) {
		listeners.push_back(listener);
	}

	void operator-=(EventListener *listener) {
		listeners.erase(std::remove(listeners.begin(), listeners.end(), listener));
	}

	void operator()(T... args) {
		for (auto listener : listeners) {
			listener->operator()(args...);
		}
	}
};
