#include <iostream>
using namespace std;

/*�������*/


void main()
{
	setlocale(LC_ALL, "ru");

	//��� ������ [���������� ���������];

	const int size = 6;
	int arr[size]{ 55,511,2,123,95,188 };

	for (int i = 0; i < size; i++)
	{
		cout<< arr[i]<< endl;
	}
}