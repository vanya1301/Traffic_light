#pragma once
#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H
#endif

#include <string>
class TrafficLight
{
private:
	static const int sizeField = 100;
	std::string trafficLightField;
	void counter(int requiredTime);
	void drawtrafficLight();
public:
	void trafficLightAction();
	TrafficLight();
	~TrafficLight();
};

