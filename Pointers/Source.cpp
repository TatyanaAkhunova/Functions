#include<iostream>
using namespace std;

//#define POINERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;

	int* pb;
	int b = 3;
	//pb - �������� � �������
	//*pb   - �������������� ����� � �������� �� ��������m �� ������
	pb = &b;

	//int - int
	//int* - ��������� �� int  
#endif // POINERS_BASICS
 
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}
