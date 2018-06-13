#pragma once
#include "Headers.h"

class Time {
private:
	int hour;
	int min;

public:
	Time() = default;

	Time(int hour, int min)
	{
		this->hour = hour;
		this->min = min;
	}

	size_t getHour()const 
	{
		return hour;
	}

	size_t getMin()const 
	{
		return min;
	}

	void setHour(size_t hour) 
	{
		this->hour = hour;
	}

	void setMin(size_t min) 
	{
		this->min = min;
	}

	bool operator==(const Time& obj) 
	{
		return(hour == obj.hour&&min == obj.min);
	}

	friend istream& operator >> (istream &is, Time &obj) 
	{
		char s;
		is >> obj.hour >> s >> obj.min;
		return is;
	}

	friend ostream& operator<< (ostream& os, Time obj) {
		os << obj.hour << "." << obj.min;
		return os;
	}
};
