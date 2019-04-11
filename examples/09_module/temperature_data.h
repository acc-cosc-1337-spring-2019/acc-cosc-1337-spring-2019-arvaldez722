#include<fstream>
#include<string>
#include<vector>
#include "temperature.h"
using std::fstream;

class TemperatureData
{
public:
	TemperatureData(std::string f) : file_name(f) {}
	void save_readings(const std::vector<Temperature>& readings);
	std::vector<Temperature> get_readings();

private:
	std::string file_name;
};