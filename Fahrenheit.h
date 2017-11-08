#pragma once
#include <iostream>
#include "Celsius.h"

class Celsius;

class Fahrenheit
{
private:

	double m_temperature;

public:

#pragma region CTOR/DTOR

	Fahrenheit();
	Fahrenheit(double);

#pragma endregion	

#pragma region Setters
	void SetTemperature(double);

#pragma endregion

#pragma region Getters

	double GetTemperature(void) const;
#pragma endregion

#pragma region operations overload

	explicit operator Celsius() const;
#pragma endregion

#pragma region Prity print
	friend std::ostream& operator<<(std::ostream& out, Fahrenheit&);

#pragma endregion

};

