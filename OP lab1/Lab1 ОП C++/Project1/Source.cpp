#include<iostream>                                  //ϳ��������� �������
#include<cmath>
using namespace std;                                //���'���

int main()
{
	setlocale(LC_ALL, "ukr");                        // ���. ����, ��� ������ ������ �� ���� ������ ����� �
	
	float b;                                           // ������� ����
	float q;
	float n;
	

	cout << "����i�� ������ ���� : ";
	cin >> b;                                        //�������� b
	cout << "����i�� ��������� : "; 
	cin >> q;                                        //�������� q
	cout << "����i�� �-��� ������ ����� : ";
	cin >> n;                                        //�������� n

	double S = (b * (pow(q, n) - 1)) / (q - 1);      //������� ����
	cout<<S;

	return 0;
}