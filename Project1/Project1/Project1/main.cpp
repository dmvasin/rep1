#include<iostream>
using namespace std;



void main()
{

	setlocale(LC_ALL, "Rus");

	int symbolCount;
	char symbol;
	int lineType;
	int index = 0;

	cout << "������� ���������� �������� � �����" << endl;
	cin >> symbolCount;

	cout << "������� ������" << endl;
	cin >> symbol;

	cout << "�������� ��� �����" << endl
		<< "1 - ������������ �����" << endl
		<< "2 - �������������� �����" << endl;

	cin >> lineType;

	if (lineType !=1 && lineType !=2)
	{
		cout << "������������ ��� �����!" << endl;
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
	