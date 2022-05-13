#include <iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n--------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 5;
//const int number_of_shifts;

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

//double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
//double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);


//void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);
//void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts);

//void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
//void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	int arr[ROWS][COLS];
	FillRand(arr, ROWS, COLS);
	
	cout << "����� ��������� �������: " << Sum(arr, ROWS, COLS) << endl;
	//cout << "������� �������������� ��������� �������: " << Avg(arr, ROWS, COLS) << endl;
	//cout << "������� ���������� ������� ��� ������ �����: "; cin >> number_of_shifts;
	//ShiftLeft(arr, ROWS, COLS, number_of_shifts);
	//Sort(arr, ROWS, COLS);
	Print(arr, ROWS, COLS);
	
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
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % 10000) / 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
		return sum;
	}
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
			j++;
		}
		return sum;
	}
}
/*double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr[ROWS][COLS], ROWS, COLS) / ROWS, COLS;
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr[ROWS][COLS], ROWS, COLS) / ROWS, COLS;
}*/

/*void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts)
{
	
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int number_of_shifts)
{
	
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	
}*/
