#include "Fahrenheit.h"

Fahrenheit::Fahrenheit() : m_temperature(0)
{
}

Fahrenheit::Fahrenheit(double temperature) : m_temperature(temperature)
{
}

void Fahrenheit::SetTemperature(double temperature)
{
	m_temperature = temperature;
}

double Fahrenheit::GetTemperature(void) const
{
	return m_temperature;
}

Fahrenheit::operator Celsius() const
{
	//T(°C) = (T(°F) - 32) / 1.8
	double celsius_temperature = (this->GetTemperature() - 32) / 1.8;

	return Celsius(celsius_temperature);
}

std::ostream & operator<<(std::ostream & out, Fahrenheit & temperature)
{
	out << temperature.GetTemperature() << (char) 248 << "F";
	return out;
}
