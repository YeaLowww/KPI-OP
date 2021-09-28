#include<iostream>                //Бібліотеки
#include<cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");

	double x;               //Змінні які нам потрібні
	double a = 0;
	int n = 1;
	int k = 0;
	double sum = 0;

	cin >> x;

	while (true)
	{
		a = 0;                                 //Завжди обнуляємо а
		a = x / (pow(n, 0.5) * (n + 2));         // Формула 
		k = n;                                    // Щоб порахувати А к-те
		n++;                                    //Послідовність, збільшуємо на 1 на наступний хід
		sum = sum + a;                          // Обчислення суми
		
		if (k > 10 && abs(a) < 0.00001)           //Виконання умов
		{
			cout << sum << endl;
			break;                               //Вихід з циклу
		}
	}










}

