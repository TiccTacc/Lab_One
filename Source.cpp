#include <iostream>
using namespace std;

void first_task(), second_task(), third_task(), fourth_task(), fifthTask(), SixthTask();

enum Task_lr_one { first = 1, second = 2, third = 3, fourth = 4, fifth = 5, Six = 6 };

int main() 
{
	setlocale(LC_ALL, ""); // ��������� � �������
	char answer = 'n';
	do {

		int Selecttask = 0;

		cout << "�������� �������:" << endl;
		cout << "1) ������ ""���������� �������""" << endl;
		cout << "2) ������ ""��������� ������""" << endl;
		cout << "3) ������ ""���������� ������""" << endl;
		cout << "4) ������ ""����� ��������� �������� � �������� ������� � ����� ����� �������""" << endl;
		cout << "5) ������ ""���������� ������ ������� ��������""" << endl;
		cout << "6) ������ ""����� ������������� � ������������ �������� �������.""" << endl;
		cin >> Selecttask;

		switch (Selecttask)
		{
		case first:
			first_task();
			break;
		case second:
			second_task();
			break;
		case third:
			third_task();
			break;
		case fourth:
			fourth_task();
			break;
		case fifth:
			fifthTask();
			break;
		case Six:
			SixthTask();
			break;
		default:
			cout << "��� ���� �� ��������!" << endl;
			break;
		}

		cout << "����������? (y/n)" << endl;
		cin >> answer;

	} while (answer == 'y');

	return 0;
}
