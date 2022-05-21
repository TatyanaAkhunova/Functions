//https://github.com/TatyanaAkhunova/Functions/blob/Templated2/Template/Main.cpp
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n------------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);
//void Print(double arr[], const int n);
//void Print(char arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

template<typename T>
void shiftLeft(T arr[], const int n, const int number_of_shifts);

//void shiftRight(int arr[], const int n, const int number_of_shifts_2);
//void shiftRight(double arr[], const int n, const int number_of_shifts_2);


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
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;

	cout << "Введите количество сдвигов для сдвига влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов для сдвига вправо: "; cin >> number_of_shifts_r;
	shiftRight(arr, n, number_of_shifts_r);
	Print(arr, n);

	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;

	//int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);

	cout << delimiter << endl;
	const int C_SIZE = 7;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Среднее арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;

	cout << delimiter << endl;

	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
}


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;
	}
}void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
double Avg(T arr[], const int n)
	//среднее арифметическое:
{
	return (double)Sum(arr, n) / n;
}
const char* Avg(char arr[], const int n)
{
	return "Для символов невозможно вычислить среднее арифметическое";
}
template<typename T>
void shiftLeft(T arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
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
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(double arr[], const int n, const int number_of_shifts_r)
{
	for (int i = 0; i < number_of_shifts_r; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

