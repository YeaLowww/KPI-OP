#include<iostream>                //���������
#include<cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");

	double x;               //���� �� ��� ������
	double a = 0;
	int n = 1;
	int k = 0;
	double sum = 0;

	cin >> x;

	while (true)
	{
		a = 0;                                 //������ ��������� �
		a = x / (pow(n, 0.5) * (n + 2));         // ������� 
		k = n;                                    // ��� ���������� � �-��
		n++;                                    //�����������, �������� �� 1 �� ��������� ���
		sum = sum + a;                          // ���������� ����
		
		if (k > 10 && abs(a) < 0.00001)           //��������� ����
		{
			cout << sum << endl;
			break;                               //����� � �����
		}
	}










}

