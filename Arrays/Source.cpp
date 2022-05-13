#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
void ShiftLeft(int arr[], const int n, const int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	//���������� ������� ���������� �������
	FillRand(arr, n);
	//����� ������� �� �����
	Print(arr, n);

	//����� ��������� �������:
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;

	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	

	const int SIZE = 8;
	int brr[SIZE];
	//���������� ������� ���������� �������
	for (int i = 0; i < SIZE; i++)
	{
		brr[i] = rand() % 100;
	}
	//����� ������� �� �����
	for (int i = 0; i < SIZE; i++)
	{
		cout << brr[i] << "\t";

	}
	cout << endl;

	//����� ��������� �������:
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += brr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "������� �������������� ��������� �������: " << (double)sum / SIZE << endl;

	//int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = brr[0];
		for (int i = 0; i < SIZE; i++)
		{
			brr[i] = brr[i + 1];
		}
		brr[SIZE - 1] = buffer;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << brr[i] << "\t";

	}
	cout << endl;
}
	void FillRand(int arr[], const int n)
	{
		//���������� ������� ���������� �������:
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
	}
	void Print(int arr[], const int n)
	{
		//����� ������� �� �����:
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";

		}
		cout << endl;
	}
	int Sum(int arr[], const int n)
	{
		//����� ��������� �������:
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	double Avg(int arr[], const int n)
	{
		//������� ��������������:
		return (double)Sum(arr, n) / n;
	}
	void ShiftLeft(int arr[], const int n, const int number_of_shifts)
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