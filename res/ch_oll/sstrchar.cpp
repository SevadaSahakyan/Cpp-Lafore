// sstrchar.cpp
// ������ � �������� � ������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	char charray[80];
	string word;

	cout << "������� �����: ";
	cin >> word;
	int wlen = word.length();    // ����� ������
	cout << "�� ������ �������: ";
	for(int j = 0; j < wlen; j++)
		cout << word.at(j);      // ��� ����� �������� �� ����� �� ������� ������
	// cout << word[j];			 // � ��� �������� �� �����

	word.copy(charray, wlen, 0); // �������� ������ � ������
	charray[wlen] = 0;
	cout << "\n������ ��������: " << charray << endl;

	return 0;
}
