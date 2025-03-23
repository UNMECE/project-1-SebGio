#include "capacitor.h"
#include <iostream>

_capacitor::~_capacitor()
{
	delete[] time;
	delete[] voltage;
	delete[] current;
}

void _capacitor::CalculateCurrent()
{
	current = new double[50001];
	current[0] = 1e-2;
	double changeTime = 1e-10;
	for (int i = 1; i < 50001; ++i)
	{
		current[i] = current[i - 1] - ((current[i - 1] / (1000 * C)) * changeTime);
	}
}

void _capacitor::CalculateVoltage()
{
	voltage = new double[50001];
	voltage[0] = 10.0;
	double constCurrent = 1e-2;
	double changeTime = 1e-10;
	for (int i = 1; i < 50001; ++i)
	{
		voltage[i] = voltage[i - 1] + (constCurrent * changeTime * (1 / C));
	}
}