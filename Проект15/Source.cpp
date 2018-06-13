#include "trains.h"
int main()
{
	setlocale(LC_ALL, "russian");
	
	Trains tVector;
	Train tmp;
	ifstream in_file("trains.txt");
	if (!in_file)
	{
		cerr << "File open error" << endl;
	}
	else
	{
		while (!in_file.eof())
		{
			in_file >> tmp;
			tVector.Add(tmp);
		}
		cout << "1 - информация успешно записана\n\n";
	}

	cout << "2 - Вывод информации о всех поездах\n\n";
	tVector.printAll();

	cout << "3 - введите время, чтобы увидеть информацию о нужном поезде(н.: 22.10): ";
	
	int h, m; char s;
	cin >> h >> s >> m;
	Time t(h, m);
	tVector.printTrainsByTime(t);

	system("pause");
	return 0;
}