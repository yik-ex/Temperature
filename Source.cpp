#include <iostream>
#include "Celsius.h"
#include "Fahrenheit.h"

int main(void)
{
	Celsius waterBoilingPoint(100);
	Celsius waterFreezingPoint(0);
	Fahrenheit absoluteZeroPoint(-459.67);

	std::cout << "+====================================================================" << std::endl;
	std::cout << "| Boiling Point Temperatura:" << std::endl;
	std::cout << "+--------------------------------------------------------------------" << std::endl;
	std::cout << "|" << waterBoilingPoint << std::endl;
	std::cout << "|" << static_cast<Fahrenheit>(waterBoilingPoint) << std::endl;
	std::cout << "+====================================================================" << std::endl;
	std::cout << "| Watter Freezing Point Temperatura:" << std::endl;
	std::cout << "+--------------------------------------------------------------------" << std::endl;
	std::cout << "|" << waterFreezingPoint << std::endl;
	std::cout << "|" << static_cast<Fahrenheit>(waterFreezingPoint) << std::endl;
	std::cout << "+====================================================================" << std::endl;
	std::cout << "| Absolute Zero Temperatura:" << std::endl;
	std::cout << "+--------------------------------------------------------------------" << std::endl;
	std::cout << "|" << static_cast<Celsius>(absoluteZeroPoint) << std::endl;
	std::cout << "|" << absoluteZeroPoint << std::endl;
	std::cout << "+====================================================================" << std::endl;
	
	system("pause");
	return 0;
}