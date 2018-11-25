#include <iostream>
#include <ctime>
#include "trafficLight.h"

using namespace std;

void TrafficLight::counter(int countTime)
{
	int startTime = int(time(0));
	while (countTime) {
		if (startTime != int(time(0))) {
			countTime--;
			startTime = int(time(0));
		}
	}
	system("cls");
}



void TrafficLight::drawtrafficLight()
{
	for (int i = 1; i <= sizeField; i++) {
		cout << trafficLightField[i];
		if (i % 10 == 0)
			cout << endl;
	}
}



void TrafficLight::trafficLightAction()
{
	system("cls");
	system("color 04");
	drawtrafficLight();
	counter(2);

	for (int i = 0; i < 2; i++) {
		system("color 06");
		counter(1);
		drawtrafficLight();
		counter(1);
	}

	system("color 02");
	drawtrafficLight();
	counter(3);
}



TrafficLight::TrafficLight()
{
	for (int i = 0; i <= sizeField; i++)
		trafficLightField += '*';
}



TrafficLight::~TrafficLight()
{
}
