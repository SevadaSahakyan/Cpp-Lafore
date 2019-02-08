// otype.cpp
// �������� ������� TYPE
#include <fstream>	           // ��� �������� �������
#include <iostream>
using namespace std;
#include <process.h>           // ��� exit()

int main(int argc, char* argv[])
{
	system("chcp 1251 > nul");

	if(argc != 2)
	{
		cerr << "\n������ �������: otype ���_�����";
		exit(-1);
	}
	char ch;                   // ������ ��� ����������
	ifstream infile;           // ������� ������� ����
	infile.open(argv[1]);      // ������� ����
	if(!infile)                // ��������� �� ������� ������
	{
		cerr << "\n���������� ������� " << argv[1];
		exit(-1);
	}
	while(infile.get(ch) != 0) // ������� ������
		cout << ch;            // ���������� ������

	return 0;
}
