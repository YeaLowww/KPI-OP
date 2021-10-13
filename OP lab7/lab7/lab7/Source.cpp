#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ukr");

	constexpr size_t size = 4;
	double arrayA[size]{ 0 };
	double arrayB[size]{ 0 };
	double arrayC[size]{ 0 };

	double Sum = 0;
	double averageFinally = 0;
	int MaxIndex = 0;


	cout << "Array A: " << endl;
	for (int i = 0; i < size; i++)  //Заповнення 1
		cin >> arrayA[i];
	cout << "Array B: " << endl;
	for (int i = 0; i < size; i++)   //Заповнення 2
		cin >> arrayB[i];
	cout << endl;

	cout << "Array C: " << endl;
	for (int i = 0; i < size; i++)
	{
		arrayC[i] = abs(pow(arrayA[i], 2) - (pow(arrayB[i], 2)));
		cout << arrayC[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		Sum += arrayC[i];
		if (arrayC[i] > arrayC[MaxIndex])
			MaxIndex = i;
	}
	cout << endl;
	averageFinally = double(Sum / size);
	cout << "Max number in array C: " << arrayC[MaxIndex] << endl;
	cout << "Avarage number in array C: " << averageFinally << endl;

	cout << "Updated array C: " << endl;
	for (int i = 0; i < size; i++)
	{
		if (arrayC[i] == arrayC[MaxIndex])
			arrayC[i] = averageFinally;
		cout << arrayC[i] << " ";
	}

}
