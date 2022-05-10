#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------------------------\n"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, const int number_of_shifts);
void shiftRight(int arr[], const int n, const int number_of_shifts_2);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	
	const int n = 5;
	int arr[n];
	int number_of_shifts;
	int number_of_shifts_r;
	FillRand(arr, n);
	Print(arr, n);
	
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n)<< endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;

    cout << delimiter << endl;

	cout << "Введите количество сдвигов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов для сдвига вправо: "; cin >> number_of_shifts_r;
	shiftRight(arr, n, number_of_shifts_r);
	Print(arr, n);
	cout << "Сортировка массива в порядке возрастания, при помощи \"алгоритма выбора\": " /*<< Sort(arr, n)*/ << endl;
	Print(arr, n);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	int min;
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxValueIn(int arr[], const int n)
{
	int max;
	max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void shiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n - 1] = buffer;
		}
}
void shiftRight(int arr[], const int n, const int number_of_shifts_r)
{
	for (int i = 0; i < number_of_shifts_r; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = buffer;
	}
}
void Sort(int arr[], const int n)
{
	int min, buffer; //для поиска минимального элемента и для обмена
	
	for (int i = 0; i < n-1; i++)
	{
		min = i; // запоминаем индекс текущего элемента
    // ищем минимальный элемент чтобы поместить на место i-ого
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min]) // если элемент меньше минимального,
				min = j; // запоминаем его индекс в min
		}
		buffer = arr[i]; // меняем местами i-ый и минимальный элементы
		arr[i] = arr[min];
		arr[min] = buffer;
	}
	//return 0;
}