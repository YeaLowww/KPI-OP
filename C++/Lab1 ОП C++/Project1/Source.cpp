#include<iostream>                                  //Підключення бібліотек
#include<cmath>
using namespace std;                                //Пам'ять

int main()
{
	setlocale(LC_ALL, "ukr");                        // Укр. мова, але чомусь VS інколи не хоче писати букву і
	
	int b;                                           // Створив змінні
	int q;
	int n;
	

	cout << "Введiть перший член : ";
	cin >> b;                                        //Введення b
	cout << "Введiть знаменник : "; 
	cin >> q;                                        //Введення q
	cout << "Введiть к-сть перших чисел : ";
	cin >> n;                                        //Введення n

	double S = (b * (pow(q, n) - 1)) / (q - 1);      //Формула суми
	cout<<S;

	return 0;
}