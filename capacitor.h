#ifndef CAPACITOR_H
#define CAPACITOR_H

struct _capacitor
{

	double* time;       // time array
	double* voltage;    // voltage array
	double* current;    // current array
	double C;           // capacitance value

	void CalculateVoltage();
	void CalculateCurrent();
	~_capacitor();
};
typedef struct _capacitor Capacitor;


#endif // !CAPACITOR_H

