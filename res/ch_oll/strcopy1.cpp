// strcopy1.cpp
// ����������� ������ � �������������� �����
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	// �������� ������
	char str1[] = "��������� ������ ������� �����,";
	const int MAX = 80;                     // ������������ ����� ������
	char str2[MAX];                         // ���� ������

	for(int j = 0; j < strlen(str1); j++)   // �������� strlen(str1)
		str2[j] = str1[j];                      // �������� �� str1 � str2
	str2[j] = '\0';                         
	cout << str2 << endl;	// � ������� �� �����

	return 0;
}
