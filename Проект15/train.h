#pragma once
#include"Time.h"

class Train {
private:
	string trainNumber;
	Time departure;
	string station;

public:
	Train() 
	{
		trainNumber = "";
		departure = Time();
		station = "";
	}

	bool operator ==(string trainNum) 
	{
		return(this->trainNumber == trainNum);
	}

	bool operator==(Time t)
	{
		return (departure == t);
	}

	string getTrainNum()const 
	{
		return trainNumber; 
	}

	friend istream & operator >> (istream & is, Train & t)
	{
		is >> t.trainNumber >> t.departure >> t.station;
		return is;
	}

	friend ostream & operator<<(ostream & os, Train t) 
	{
		os << t.trainNumber << " " << t.departure << " " << t.station << endl;
		return os;
	}
};