#include <iostream>
using namespace std;

void	first_task(),	second_task(),		third_task(), 
		fourth_task(),	fifthTask(),		SixthTask(), 
		seventhTask(),	eighthTask(),		ninethTask(), 
		tenthTask();

enum Task_lr_one {	first	= 1, 
					second	= 2, 
					third	= 3, 
					fourth	= 4, 
					fifth	= 5, 
					Six		= 6, 
					Seven	= 7,
					Eigh	= 8,
					Nine	= 9,
					Ten		= 10};

int main() 
{
	setlocale(LC_ALL, ""); // кириллица в консоли
	char answer = 'n';
	do {

		int Selecttask = 0;

		cout << "Выберите задание:" << endl;
		cout << "1) Задача ""одномерные массивы""" << endl;
		cout << "2) Задача ""двумерные массив""" << endl;
		cout << "3) Задача ""Символьный массив""" << endl;
		cout << "4) Задача ""Поиск заданного значение в числовом массиве и вывод суммы массива""" << endl;
		cout << "5) Задача ""Сортировка массив методом пузырька""" << endl;
		cout << "6) Задача ""Поиск максимального и минимального значений массива.""" << endl;
		cout << "7) Задача ""Заполнение массива «змейкой».""" << endl;
		cout << "8) Задача ""Функция, считающая длину строки.""" << endl;
		cout << "9) Задача ""Функция, удаляющая из строки повторяющиеся символы""" << endl;
		cout << "10) Задача ""Программа реализующая шифрование/дешифрование шифром Цезаря.""" << endl;
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
		case Seven:
			seventhTask();
			break;
		case Eigh:
			eighthTask();
			break;
		case Nine:
			ninethTask();
			break;
		case Ten:
			tenthTask();
			break;
		default:
			cout << "Так дела не делаются!" << endl;
			break;
		}

		cout << "Продолжить? (y/n)" << endl;
		cin >> answer;

	} while (answer == 'y');

	return 0;
}
