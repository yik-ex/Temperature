#include "Celsius.h"

Celsius::Celsius() : m_temperature(0)
{
}

Celsius::Celsius(double temperature) : m_temperature(temperature)
{
}

void Celsius::SetTemperature(double temperature)
{
	m_temperature = temperature;
}

double Celsius::GetTemperature(void) const
{
	return m_temperature;
}

Celsius::operator Fahrenheit() const
{
	//T(°F) = T(°C) ª 1.8 + 32 
	double fahrenheit_temperature = (this->GetTemperature() * 1.8) + 32;

	return Fahrenheit(fahrenheit_temperature);
}

std::ostream & operator<<(std::ostream & out, Celsius & temperature)
{
	out << temperature.GetTemperature() << (char) 248 << "C";
	return out;
}
