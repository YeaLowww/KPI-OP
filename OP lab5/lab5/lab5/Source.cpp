#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int a; //������ �����
    for (int i = 1; i < 1000; i++)
    {
        a = i; //��������� ���� � ����� � ��� ������ �� ���� ������ �� 1 �� 1000
        int temp = a; //�������� �����
        int b = 0; //����������� �����
        while (temp > 0 && temp < 1000)
        {
            b = b * 10 + temp % 10; //����������� ����� �� ������
            temp = temp / 10; //³������� ������� �����
        }
        if (a == b)
            cout << b<<endl;
    }
    return 0;
}