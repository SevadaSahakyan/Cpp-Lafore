// ferrors.cpp
// �������� ������ �������� �����
#include <fstream>           // ��� �������� �������
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > nul");

	ifstream file;
	file.open("a:test.dat");

	if(!file)
		cout << "\n���������� ������� GROUP.DAT";
	else
		cout << "\n���� ������ ��� ������.";

	cout << "\nfile = " << file;
	cout << "\n��� ������ = " << file.rdstate();
	cout << "\ngood() = " << file.good();
	cout << "\neof() = " << file.eof();
	cout << "\nfail() = " << file.fail();
	cout << "\nbad() = " << file.bad() << endl;

	file.close();

	return 0;
}
