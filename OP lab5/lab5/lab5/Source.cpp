#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int a; //Вхідне число
    for (int i = 1; i < 1000; i++)
    {
        a = i; //Присвоєння змінні а змінну і щоб пройти по всим числам від 1 до 1000
        int temp = a; //Допоміжна змінна
        int b = 0; //Перевернуте число
        while (temp > 0 && temp < 1000)
        {
            b = b * 10 + temp % 10; //Перевертаємо чисто по цифрам
            temp = temp / 10; //Відкидаємо останню цифру
        }
        if (a == b)
            cout << b<<endl;
    }
    return 0;
}