// ipers.cpp
// ������ ������� �� �����
#include <fstream>      // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person            // ����� person
{
protected:
	char name[80];      // ��� ��������
	short age;          // ��� �������
public:
	void showData()     // ������� ������
	{
		cout << "���: " << name << endl;
		cout << "�������: " << age << endl;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	person pers;        // ���������� ���� person

	// ������� �����
	ifstream infile("PERSON.DAT", ios::binary);

	// ������ ������
	infile.read(reinterpret_cast<char*>(&pers), sizeof(pers)); 

	pers.showData();    // ������� ������

	return 0;
}
