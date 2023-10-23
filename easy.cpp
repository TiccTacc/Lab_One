#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

const int sizeArray{ 10 };	// ������������ ����� ������a
const int max_length{ 50 }; // ������������ ����� ������ (������� ������� ���� \0)

//1. ���������� �������� ������
void first_task()
{
	int massOnedim[sizeArray]{ 1,2,3,4,5,6,7,8,9,0 };

	cout << "���������� ������:" << endl;
	for (int i = 0; i < size(massOnedim); i++)
	{
		cout << "Element [" << i << "] = " << massOnedim[i] << endl;
	}

}

//2. ��������� �������� ������
void second_task()
{
	int massTwodim[sizeArray][2]{ {1,11}, {2,22}, {3,33}, {4,44}, {5,55}, {6,66}, {7,77}, {8,88}, {9,99}, {0,00} };
	
	cout << "��������� ������:" << endl;
	for (int i = 0; i < size(massTwodim); i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "Element[" << i << "]" << "[" << j << "] = " << massTwodim[i][j] << " \t ";
		}
		cout << endl;
	}

}

//3. ������ ��������
void third_task() 
{
	char arraySumbol[][max_length]{ "C++", "C#",  "Python", "Java","Kotlin", "Go", "Dart", "PHP" };
	for (int i = 0; i < size(arraySumbol); i++)
	{
		cout << arraySumbol[i] << endl;
	}
}

//4. ����������� ���� ����������� ������� ����� �����. �������� �������, �����������:
//		�) ����� ��������� ��������;
//		�) ����������� ����� ��������� �������;
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
		{ // �������� ����� ���������� ������������ ������ � ���� ������� =)
			cout << "������� ����� �� 0 �� 9" << endl;
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
			else cout << "������� ������������ �����" << endl;
		}
			break;
		case summArray:
		{
			int sum = 0;
			for (int i = 0; i < size(oneDimArray); i++)
			{
				sum += oneDimArray[i];
			}
			cout << "�����: " << sum << endl;
		}
			break;
		default:
			break;
		}
	} while (numSelect!=0);


}

// 5. ��������  ���������, ����������� ���������� �������. 
// ���������� ������ ����������� ��������� �������: 
//		��������� ������������� ��� �������� ������� � ������� ������������ � ����������� ��������. 
//		������������ ������ ������� � ��������� ���������, � ����������� � � ������. 
//		����� ������������� ��� �������� ����� ������� � ����������, 
//		������� �������� � ������� � ������ �� �������������� � ������������� � ������ ����������. 
//		� .�.�. ���� ������ �� ����� ������������.
void fifthTask()
{
	int arrayNum[20]{ 3,109,-1,7,-30,52,100,27,69,99,1000,132,555,777,888,999,233,-500,30213,1 };
	
	{
		cout << "��������� ������: ";
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
		cout << "��������������� ������: ";
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

//5. ����������� ���������� ������� ��������.
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

//6. �������� �������, ��������� ����� ������ 
void eighthTask()
{
	char textWrite[5000]; // ��� ���� ����� ������� ���������� ���������� �� <string.h>
	cout << "Enter the text:";
	cin >> textWrite;
	int i = 0;

	while (textWrite[i] != '\0')
	{
		i++;
	}
	cout << "Number of characters:" << i << endl;
}

//7.	�������� �������, ��������� �� ������ ������������� ������� 
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

//8.	�������� ��������� ����������� ����������/������������ ������ ������.
int getArrayalp();

void tenthTask()
{
	char textWrite[5000];
	char textOut[5000];
	int shift = 1;
	char Cyrillic = 'n';
	
	//�����
	cout << "Enter the cipher:";
	cin.getline(textWrite, 5000);
	
	// �����
	cout << "Enter the shift";
	cin >> shift;
	
	//������������ ���������?
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