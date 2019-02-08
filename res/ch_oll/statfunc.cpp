// statfunc.cpp
// ����������� ������� � ID ��������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class gamma
{
private:
	static int total;       // ����� �������� ������
	// (������ ����������)
	int id;                 // ID �������� �������
public:
	gamma()                 // ����������� ��� ����������
	{
		total++;            // �������� ������
		id = total;         // id ����� �������� �������� total
	}
	~gamma()                // ����������
	{
		total--;
		cout << "�������� ID " << id  << endl;
	}
	static void showtotal() // ����������� �������
	{
		cout << "�����: " << total << endl;
	}
	void showid()           // ������������� �������
	{
		cout << "ID: " << id << endl;
	}
};
//---------------------------------------------------------
int gamma::total = 0;       // ����������� total
///////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	gamma g1;
	gamma::showtotal();

	gamma g2, g3;
	gamma::showtotal();

	g1.showid();
	g2.showid();
	g3.showid();
	cout << "----------����� ���������----------\n";

	return 0;
}
