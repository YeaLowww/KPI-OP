#include <iostream>
#include <cmath>
using namespace std;

int main() {

	float x1 = 1;         //� ����� ������
	float x2 = 0.3;
	float x;              //��������� ����
	int i;        
	int n;
	            
	cin >> n;             //����

	cout << x1 << endl;          //���� ������ ���� �����
	cout << x2 << endl;
	for (i = 3; i <= n; i++) {        //�� ��������� ����� ���������� �� ������ ������� �����

		x = (i+1)*(x1);
		cout << x << endl;

		x1 = x2;
		x2 = x;
	}
}