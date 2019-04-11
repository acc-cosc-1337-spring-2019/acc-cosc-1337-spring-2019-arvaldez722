#include "temperature_data.h"

void TemperatureData::save_readings(const std::vector<Temperature>& readings)
{
	fstream file(file_name, std::ios::out | std::ios::app);
	
	for (auto r : readings) {
		file << r.get_hour() << " ";
		file << r.get_reading();
		file << "\n";
	}
	file.close();
}

/*
while (getline(my_file, line))
{
	std::cout << line << std::endl;
}
	read a line of pegs for the homeworlk 
	add the lineto the vector of pegs
*/

std::vector<Temperature> TemperatureData::get_readings()
{
	std::vector<Temperature> readings;

	fstream file(file_name, std::ios::in);

	int h;
	double t;

	while (file >> h >> t)
	{
		readings.push_back(Temperature(h, t));
	}
	file.close();



	return readings;
}
