#include "capacitor.h"
#include <iostream>

int main()
{

	Capacitor capacitor;
	capacitor.time = new double[50001];
	capacitor.C = 100e-12;

	for (int i = 0; i < 50001; ++i)
		capacitor.time[i] = i * 1e-10;

	capacitor.CalculateCurrent();
	capacitor.CalculateVoltage();

	for (int i = 0; i < 50001; i += 200)
	{
		std::cout << capacitor.time[i] << "s: Voltage: " << capacitor.voltage[i] << "V Current: " 
			<< capacitor.current[i] << "A" << std::endl;
	}
	return 0;
}