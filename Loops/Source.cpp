#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t";

//#define WHILE_1
//#define �������_1
//#define �������_2
//#define ���������
//#define Shooter
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1

	int i = 0; // ������� �����
	int n; // ���-�� ��������
	cout << "������� ���������� ��������:"; cin >> n;
	while (n--) // (n < i)
	{
		//cout << ++i << "Hello" << endl;
		//i++;
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_1

#ifdef �������_1
	int number;
	int reverse = 0;
	cout << "������� �����:"; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << reverse << endl;
	cout << number << endl;
	if (number == reverse)
	{
		cout << "������������ �����" << endl;
	}
	else
	{
		cout << "�� ������������ �����";
	}
#endif �������_1

#ifdef �������_2
	int number;
	int reverse = 0;
	cout << "������� ����� ����������� ������:"; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	if (number == reverse)
	{
		cout << "���������� �����" << endl;
	}
	else {
		cout << "������� �����" << endl;;
	}
#endif // �������_2

#ifdef ���������
	char key; //��� ���������� ����� ��� ������� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // ���������

#ifdef Shooter
	char key;
	do
	{
		key = _getch();
		if (key == 'w' || key == 'W')
			cout << "������" << endl;
		else if (key == 's' || key == 'S')
			cout << "�����" << endl;
		else if (key == 'a' || key == 'A')
			cout << "�����" << endl;
		else if (key == 'd' || key == 'D')
			cout << "������" << endl;
		else if (key == 13)
			cout << "�����" << endl;
		else if (key == ' ')
			cout << "������" << endl;
		else
			cout << "Error" << endl;
	} while (key != Espace);
#endif // Shooter	
	int n;
	cout << "������� ���������� �����:"; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple) cout << i << tab;
	}
	cout << endl;
}