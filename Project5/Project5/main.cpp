#include <iostream>
using namespace std;

/*массивы*/


void main()
{
	setlocale(LC_ALL, "ru");

	//тип данных [количество этементов];

	const int size = 5;
	int arr[size]{ 55,511,2,123,95 };

	for (int i = 0; i < size; i++)
	{
		cout<< arr[i]<< endl;
	}
}