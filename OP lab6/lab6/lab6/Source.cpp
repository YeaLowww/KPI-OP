#include<iostream>
#include<cmath>
using namespace std;

int A(float n, float m)
{

	if (n == 0)            //����� �����
	{
		return m + 1;      // ���� ���������� ���������:
	}
	{
	if ((n != 0) && (m == 0))   //����� �����
	{
		return A(n - 1, 1);      // ���� ���������� ���������:
	}
	if ((n > 0) && (m > 0))   //����� �����
		{
			return A(n - 1, A(n, m - 1));   // ���� ���������� ���������:
	}
		}

	}

	
int main()
{
	setlocale(LC_ALL, "ukr");

	float n;
	float m;

	cout << "����i�� ����� n:  ";
	cin >> n;
	cout << "����i�� ����� m:  ";
	cin >> m;

	cout << A(n, m);   // �������� �������
}