#pragma once
#include <iostream>
#include "Fahrenheit.h"

class Fahrenheit;

class Celsius
{
private:

	double m_temperature;

public:
	
#pragma region CTOR/DTOR

	Celsius();
	Celsius(double);
	
#pragma endregion	

#pragma region Setters
	void SetTemperature(double);
	
#pragma endregion

#pragma region Getters

	double GetTemperature(void) const;
#pragma endregion

#pragma region operations overload

	explicit operator Fahrenheit() const;
#pragma endregion

#pragma region Prity print
	friend std::ostream& operator<<(std::ostream& out, Celsius&);

#pragma endregion

};

