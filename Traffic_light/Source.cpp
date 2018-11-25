#include <iostream>
#include <ctime>
#include <conio.h>
#include "trafficLight.h"

using namespace std;

int main()
{
	TrafficLight t;
	const int S = 115, P = 112, E = 101;
	int keyHolder = 0;

	cout << "Press \"S\" to start traffic light\n"
		<< "Press \"P\" to pause traffic light\n"
		<< "Press \"E\" to stop traffic light\n"
		<< "Pause or stop sets then full traffic light's cicle completes (red-yellow-green)\n";

	while (true)
	{
		if (_kbhit()) {

			switch (_getch()) {
			case S:
				keyHolder = S;
				t.trafficLightAction();
				break;

			case P:
				keyHolder = P;
				system("cls");
				system("color 07");
				cout << "Traffic light is on pause\n"
					<< "Press S to continue\n";
				break;
			case E:
				system("cls");
				system("color 07");
				cout << "Traffic light stopped\nPress any key to exit";
				_getch();
				return 0;
				break;

			default:
				break;
			}
		}
		else if (keyHolder == S)
			t.trafficLightAction();
	}
	return 0;
}

