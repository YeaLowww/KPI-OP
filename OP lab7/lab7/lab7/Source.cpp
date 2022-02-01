#include<iostream>
#include<cmath>
using namespace std;

void input(double* p);
void output(double* p);
int main()
{
	const int size = 5;
	cout << "Size of arrays: "<< size << endl;
	double arrayA[size], arrayB[size], arrayC[size];
	cout << "Array A: " << endl;
	input(arrayA);
	output(arrayA);
	cout << "Array B: " << endl;
	input(arrayB);
	output(arrayB);

	double Sum = 0;
	double averageFinally = 0;
	int MaxIndex = 0;

	cout << "Array C: " << endl;        //Заповнення C Через формулу
	for (int i = 0; i < size; i++)
	{
		arrayC[i] = abs(pow(arrayA[i], 2) - (pow(arrayB[i], 2)));
		cout << arrayC[i] << " ";
	}
	for (int i = 0; i < size; i++)       //Шукання макс числа
	{
		Sum += arrayC[i];
		if (arrayC[i] > arrayC[MaxIndex])
			MaxIndex = i;
	}
	cout << endl;
	averageFinally = Sum / size;                               //Середнє арифметичне
	cout << "Max number in array C: " << arrayC[MaxIndex] << endl;
	cout << "Avarage number in array C: " << averageFinally << endl;

	cout << "Updated array C: " << endl;
	for (int i = 0; i < size; i++)           //Заміна найвищого числа на середнє арифметичне
	{
		if (arrayC[i] == arrayC[MaxIndex])
			arrayC[i] = averageFinally;
		cout << arrayC[i] << " ";
	}
}
void input(double* p) {
	const int size = 5;
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		*p = rand() % 19 -9;
		p++;
	}
}
void output(double* p) {
	const int size = 5;
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << "\n";
}