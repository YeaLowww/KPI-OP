#include <iostream>
#include <cmath>
using namespace std;

int main() {

	float x1 = 1;         //З умови задачі
	float x2 = 0.3;
	float x;              //Створюємо змінні
	int i;        
	int n;
	            
	cin >> n;             //Ввод

	cout << x1 << endl;          //Вивід перших двух чисел
	cout << x2 << endl;
	for (i = 3; i <= n; i++) {        //За допомогою цикла обраховуємо по закону наступні числа

		x = (i+1)*(x1);
		cout << x << endl;

		x1 = x2;
		x2 = x;
	}
}