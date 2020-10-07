// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Vector
{
private:
	int lin;
	int* array;
public:
	Vector(int size):
		lin(size)
	{
		array = new int[lin];
	}
	~Vector() {
		delete[] array;
	}

	Vector(int size, int *dir):
		lin(size)
	{
		array = new int[lin];
		for (int i = 0; i < lin; i++)
		{
			array[i] = dir[i];
		}
	}
	void sum()
	{
		int max = array[0];
		int rasp = 0;
		int sss = 0;
		for (int i = 0; i < lin; i++)
		{
			if (max < array [i])
			{
				max = array[i];
				rasp = i;
				
			}
		}
		for (int i = rasp+1; i < lin; i++)
		{
			sss += array[i];
			
		}
		cout << sss;
	}

	void getArray()
	{
		for (int i = 0; i < lin; i++)
		{
			cout << array[i];

		}
	}

	void sort() {
		for (int i = 0; i < lin; i++)
		{
			for (int j = i; j < lin; j++)
			{
				if (array[i] < array[j])
					swap(array[i], array[j]);
			}
		}
	}
	
};




int main()
{
	int Tep[] = { 1, 5, 8, 9, 2 };
	int Ku[] = { 8, 0, 7, 6, 1 };
	Vector F(5, Tep);
	Vector K(5, Ku);
	F.sort();
	F.getArray();
	cout << endl;
	K.sum();
	cout << endl;
	K.getArray();
	

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
