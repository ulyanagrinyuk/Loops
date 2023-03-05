#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t";

//#define WHILE_1
//#define Задание_1
//#define Задание_2
//#define Переменая
//#define Shooter
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1

	int i = 0; // Счетчик цикла
	int n; // Кол-во итераций
	cout << "Введите количество итераций:"; cin >> n;
	while (n--) // (n < i)
	{
		//cout << ++i << "Hello" << endl;
		//i++;
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_1

#ifdef Задание_1
	int number;
	int reverse = 0;
	cout << "Введите число:"; cin >> number;
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
		cout << "Палиндромное число" << endl;
	}
	else
	{
		cout << "Не палиндромное число";
	}
#endif Задание_1

#ifdef Задание_2
	int number;
	int reverse = 0;
	cout << "Введите номер автобусного билета:"; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	if (number == reverse)
	{
		cout << "Счастливый билет" << endl;
	}
	else {
		cout << "Обычный билет" << endl;;
	}
#endif // Задание_2

#ifdef Переменая
	char key; //эта переменная будет код нажатой клавиши
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif // Переменая

#ifdef Shooter
	char key;
	do
	{
		key = _getch();
		if (key == 'w' || key == 'W')
			cout << "Вперед" << endl;
		else if (key == 's' || key == 'S')
			cout << "Назад" << endl;
		else if (key == 'a' || key == 'A')
			cout << "Влево" << endl;
		else if (key == 'd' || key == 'D')
			cout << "Вправо" << endl;
		else if (key == 13)
			cout << "Огонь" << endl;
		else if (key == ' ')
			cout << "Прыжок" << endl;
		else
			cout << "Error" << endl;
	} while (key != Espace);
#endif // Shooter	
	int n;
	cout << "Введите предельное число:"; cin >> n;
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