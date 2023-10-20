#include<iostream>
using namespace std;

const int sizeArray{ 10 };	// максимальная длина массивa
const int max_length{ 50 }; // максимальная длина строки (включая нулевой байт \0)

//1. одномерный числовой массив
void first_task()
{
	int massOnedim[sizeArray]{ 1,2,3,4,5,6,7,8,9,0 };

	cout << "Одномерный массив:" << endl;
	for (int i = 0; i < size(massOnedim); i++)
	{
		cout << "Element [" << i << "] = " << massOnedim[i] << endl;
	}

}

//2. двумерный числовой массив
void second_task()
{
	int massTwodim[sizeArray][2]{ {1,11}, {2,22}, {3,33}, {4,44}, {5,55}, {6,66}, {7,77}, {8,88}, {9,99}, {0,00} };
	
	cout << "Двумерный массив:" << endl;
	for (int i = 0; i < size(massTwodim); i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Element[" << i << "]" << "[" << j << "] = " << massTwodim[i][j] << " /t ";
		}
		cout << endl;
	}

}

//3. массив символов
void third_task() 
{
	char arraySumbol[][max_length]{ "C++", "C#",  "Python", "Java","Kotlin", "Go", "Dart", "PHP" };
	for (int i = 0; i < size(arraySumbol); i++)
	{
		cout << arraySumbol[i] << endl;
	}
}

//4. Осуществить ввод одномерного массива целых чисел. Написать функции, реализующие:
//		а) поиск заданного значения;
//		б) определение суммы элементов массива;
void fourth_task()
{
	int oneDimArray[sizeArray]{ 1,2,3,4,5,6,7,8,9,0 };
	enum selectOption {exit=0,findIndex=1, summArray=2};
	int numSelect = 0;
	do
	{
		cout << "" << endl;
		cin >> numSelect;
		switch (numSelect)
		{
		case exit:
			return;
			break;
		case findIndex:	
		{ // Скобочки чтобы переменные существовали только в этой области =)
			cout << "Веддите число от 0 до 9" << endl;
			int SelectNum;
			cin >> SelectNum;
			if (0 <= SelectNum <= 9)
			{
				int k = 0;
				while (k <= size(oneDimArray))
				{
					if (oneDimArray[k] == SelectNum)
					{
						cout << "Index array: " << k << endl;
						break;
					}
					else k++;
				}
			}
			else cout << "Введено некорректное число" << endl;
		}
			break;
		case summArray:
		{
			int sum = 0;
			for (int i = 0; i < size(oneDimArray); i++)
			{
				sum += oneDimArray[i];
			}
			cout << "Сумма: " << sum << endl;
		}
			break;
		default:
			break;
		}
	} while (numSelect!=0);


}