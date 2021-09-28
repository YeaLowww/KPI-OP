#include<iostream>                                 
#include<cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");
	float x;                                      //Змінні
	float y;
	int r = 1;                                    //Радіус

	cout << "Введiть координату Х: ";              //Просимо вхідні данні
	cin >> x;
	cout << "Введiть координату Y: ";
	cin >> y;

	double h1 = (pow(x, 2) + pow(y, 2));           //Допоміжна змінна
	double hypotenuse = pow(h1, 0.5);               //Обчислення гіпотенузи

	if (x >= 0 && y >= 0 && y >= x && hypotenuse <= r)           //Провірка чи належить площинні в 1 чверті
		cout << "Точка належить площинi "; 
	else if (x >= 0 && y <= 0 && y <= x && hypotenuse <= r)       //Провірка чи належить площинні в 2 чверті
		cout << "Точка належить площинi ";
	else if (x <= 0 && y >= 0 && y <= -x && hypotenuse <= r)       //Провірка чи належить площинні в 3 чверті
		cout << "Точка належить площинi ";
	else if (x <= 0 && y <= 0 && y <= x && hypotenuse <= r)        //Провірка чи належить площинні в 4 чверті
		cout << "Точка належить площинi ";
	else
		cout << "Точка НЕ належить площинi ";                      //Якщо умова не виконується







}