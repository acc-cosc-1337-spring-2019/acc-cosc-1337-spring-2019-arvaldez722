#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
public: Temperature(int h, double t) : hour(h), reading(t) {}
		int get_hour() {return hour; }
		double get_reading() { return reading; }

private:
	int hour;
	double reading;
};

#endif // !TEMPERATURE_H
