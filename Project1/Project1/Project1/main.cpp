#include<iostream>
using namespace std;



void main()
{

	setlocale(LC_ALL, "Rus");

	int symbolCount;
	char symbol;
	int lineType;
	int index = 0;

	cout << "Введите количество символов в линии" << endl;
	cin >> symbolCount;

	cout << "Введите символ" << endl;
	cin >> symbol;

	cout << "Выберите тип линии" << endl
		<< "1 - Вертикальная линия" << endl
		<< "2 - Горизонтальная линия" << endl;

	cin >> lineType;

	if (lineType !=1 && lineType !=2)
	{
		cout << "Некорректный тип линии!" << endl;
		return;
	}
	
	while (index < symbolCount)
	{
		if (lineType == 1)
		{
			cout << symbol << endl;
		}
		if (lineType == 2)
		{
			cout << symbol;
		}
		index++;
    }

	cout << endl << endl;

}
	