#include<iostream>
#include<cmath>
using namespace std;

int A(float n, float m)
{

	if (n == 0)            //ѕерша умова
	{
		return m + 1;      // якщо виконуЇтьс€ повертаЇмо:
	}
	{
	if ((n != 0) && (m == 0))   //ƒруга умова
	{
		return A(n - 1, 1);      // якщо виконуЇтьс€ повертаЇмо:
	}
	if ((n > 0) && (m > 0))   //“рет€ умова
		{
			return A(n - 1, A(n, m - 1));   // якщо виконуЇтьс€ повертаЇмо:
	}
		}

	}

	
int main()
{
	setlocale(LC_ALL, "ukr");

	float n;
	float m;

	cout << "¬ведiть число n:  ";
	cin >> n;
	cout << "¬ведiть число m:  ";
	cin >> m;

	cout << A(n, m);   // ¬иводимо функц≥ю
}