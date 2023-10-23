#include <iostream>
#include <string>
#include <cstdlib>
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
			cout << "Element[" << i << "]" << "[" << j << "] = " << massTwodim[i][j] << " \t ";
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
			if (0 <= SelectNum or 9 >= SelectNum )
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

// 5. Написать  программу, реализующую сортировку массива. 
// Сортировка должна происходить следующим образом: 
//		Программа просматривает все элементы массива и находит максимальный и минимальный элементы. 
//		Максимальный меняет местами с последним элементом, а минимальный – с первым. 
//		Далее просматривает все элементы кроме первого и последнего, 
//		находит максимум и минимум и меняет их соответственно с предпоследним и вторым элементами. 
//		И .т.д. пока массив не будет отсортирован.
void fifthTask()
{
	int arrayNum[20]{ 3,109,-1,7,-30,52,100,27,69,99,1000,132,555,777,888,999,233,-500,30213,1 };
	
	{
		cout << "Начальный массив: ";
		for (int q = 0; q < size(arrayNum); q++)
		{
			cout << arrayNum[q] << "\t";

		}
		cout << endl;
	}

	int temp;
	for (int i = 0; i < size(arrayNum); i++)
	{
		for (int h = i+1; h < size(arrayNum); h++)
		{
			if (arrayNum[i] > arrayNum[h]) {
				temp = arrayNum[i];
				arrayNum[i] = arrayNum[h];
				arrayNum[h] = temp;
			}
		}
	}

	{
		cout << "Отсортированный массив: ";
		for (int q = 0; q < size(arrayNum); q++)
		{
			cout << arrayNum[q] << "\t";

		}
		cout << endl;
	}

}

void SixthTask()
{
	int arrayTwoDim[15][2]{ 
		{ 1,-3 }, 
		{400, 123},
		{21414, 9000}, 
		{-655423, 3123}, 
		{544, 213}, 
		{5, 32}, 
		{132, 231}, 
		{43, 125}, 
		{543, 12313}, 
		{1321,23123} 
	};
	int minNum = 0;
	int maxNum = 0;
	for (int i = 0; i < size(arrayTwoDim); i++)
	{
		for (int j = 0; j < size(arrayTwoDim); j++)
		{
			if (arrayTwoDim[i][j]>maxNum)
			{
				maxNum = arrayTwoDim[i][j];
			}
			else if (arrayTwoDim[i][j]<minNum)
			{
				minNum = arrayTwoDim[i][j];
			}

		}
	}
	cout << "Max number: " << maxNum << endl;
	cout << "Min number: " << minNum << endl;
}

//5. Реализовать заполнение массива «змейкой».
void seventhTask()
{
	int arrayTwoDim[15][4];

	int snake = -1;
	for (int i = 0; i <= 15; i++)
	{
		if (snake == 4)
		{
			snake--;
			for (;snake >= 0; snake--)
			{
				cout << "Select number, index (" << i << "," << snake << "):";
				cin >> arrayTwoDim[i][snake];
				cout << endl;
			}
		}
		else if (snake == -1)
		{
			snake++;
			for (;snake <= 3; snake++)
			{
				cout << "Select number, index (" << i << "," << snake << "):";
				cin >> arrayTwoDim[i][snake];
				cout << endl;
			}
		}
	}
}

//6. Написать функцию, считающую длину строки 
void eighthTask()
{
	char textWrite[5000]; // для того чтобы считать необходимо подключить СБ <string.h>
	cout << "Enter the text:";
	cin >> textWrite;
	int i = 0;

	while (textWrite[i] != '\0')
	{
		i++;
	}
	cout << "Number of characters:" << i << endl;
}

//7.	Написать функцию, удаляющую из строки повторяющиеся символы 
void ninethTask()
{
	char textWrite[5000];
	cout << "Enter the text: "; //<< endl;
	cin.getline(textWrite,5000);
	//getline(cin, textWrite);
	string textOut;

	int i = 0;
	for (int i = 0; i < size(textWrite); i++)
	{
		bool repeadSumb = false;
		if (size(textOut) == 0)
		{
			textOut = textWrite[i];
			
		}
		else
		{
			for (int j = 0; j < size(textOut); j++)
			{
				if (textWrite[i] == textOut[j])
				{
					repeadSumb = true;
				}
			}
			if (not repeadSumb)
			{
				textOut = textOut + textWrite[i];
			}
		}
	}
	cout << "Dont repead simbols:" << textOut << endl;
}

//8.	Написать программу реализующую шифрование/дешифрование шифром Цезаря.
int getArrayalp();

void tenthTask()
{
	char textWrite[5000];
	char textOut[5000];
	int shift = 1;
	char Cyrillic = 'n';
	
	//текст
	cout << "Enter the cipher:";
	cin.getline(textWrite, 5000);
	
	// Сдвиг
	cout << "Enter the shift";
	cin >> shift;
	
	//использовать киррилицу?
	cout << "Cyrillic alphabet (y/n)?";
	cin >> Cyrillic;

	int alphabet = getArrayalp((Cyrillic =='y'));

}

int getArrayalp(bool cyr = false)
{
	if (cyr)
	{
		int alphabet[33]{};
	}
	

	return alphabet;
}