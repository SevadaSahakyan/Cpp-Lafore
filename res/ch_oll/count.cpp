// count.cpp
// ������� ���������� ��������, ������� ������ ��������
#include <iostream>
#include <algorithm>                 // ��� count()
using namespace std;

int arr[] = { 33, 22, 33, 44, 33, 55, 66, 77 };

int main()
{
	system("chcp 1251 > nul");

	int n = count(arr, arr + 8, 33); // �������, ������� ��� ����������� 33

	cout << "����� 33 ����������� " << n << " ���(�) � �������." << endl;

	return 0;
}
