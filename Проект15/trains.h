#pragma once
#include "train.h"
#include <vector>

class Trains
{
private:
	vector<Train> trainsVector;
public:
	void Add(Train t)
	{
		trainsVector.push_back(t);
	}

	
	void printTrainsByTime(Time t)
	{
		vector<Train>::iterator it = trainsVector.begin();
		for (; it != trainsVector.end(); it++)
			if ((*it) == t)
				cout << *it << endl;
	}

	void printAll()
	{
		vector<Train>::iterator it = trainsVector.begin();
		for (; it != trainsVector.end(); it++)
			cout << *it << endl;
	}
};
