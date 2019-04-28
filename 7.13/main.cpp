//Fig:07_12.cpp
#include <iostream>
#include <iomanip>
using namespace std;

const unsigned int MAXSIZE = 10;

int findInt(int* arr, int size, int target);
int insertInt(int* arr, int size, int num);
bool isLegal(int input);
void showArr(int* arr, int size);

int main()
{
	int arr[MAXSIZE] = {0};
	int temp = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Input integer: ";
		cin >> temp;
		insertInt(arr, MAXSIZE, temp);
	}

	showArr(arr, MAXSIZE);
}

int findInt(int* arr, int size, int target)
{
	int i = 0;
	bool bFound = false;
	for (; i < size; i++)
	{
		if (arr[i] == target)
		{
			bFound = true;
			break;
		}
		else if (arr[i] == 0)
		{
			break;
		}
	}
	if (!bFound)
	{
		i = -1;
	}
	return i;
}

int insertInt(int* arr, int size, int num)
{
	if (!isLegal(num))
	{
		return -1;
	}
	int i = findInt(arr, size, num);
	bool bInsert = false;
	if (i == -1)
	{
		for (i = 0; i < size; i++)
		{
			if (arr[i] == 0)
			{
				arr[i] = num;
				bInsert = true;
				break;
			}
		}
	}
	if (!bInsert)
	{
		i = -1;
	}
	return i;
}

void showArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << " ";
		}
		else
		{
			break;
		}
	}
	cout << endl;
}

bool isLegal(int input)
{
	return ((input > 0) && (input <= 100));
}

