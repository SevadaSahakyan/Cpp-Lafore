// statdata.cpp
// ����������� ������ ������
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class foo
{
private:
	static int count;  // ����� ���� ��� ���� ��������
					   // (� ������ "����������")
public:
	foo()              // ����������������� ��� �������� �������
	{
		count++;
	}
	int getcount()     // ���������� �������� count
	{ 
		return count;
	}
};
//--------------------------------------------------------
int foo::count = 0;    // *�����������* count
//////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251 > nul");

	foo f1, f2, f3;    // �������� ���� ��������

	// ������ ������ ����� ���� � �� �� ��������
	cout << "����� ��������: " << f1.getcount() << endl;
	cout << "����� ��������: " << f2.getcount() << endl;
	cout << "����� ��������: " << f3.getcount() << endl;

	return 0;
}
