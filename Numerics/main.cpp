#include<iostream>
#include<Windows.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define SHIFT_RIGHT
#define BIN
#define HEX

#define tab "\t"


void main()
{
	setlocale(LC_ALL, "");

#ifdef SHIFT_RIGHT
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	//����� ��������� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int number_of_shifts;

	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = buffer;

		Sleep(800); //������� Sleep() ���������������� ���������� ��������� �� �������� ����� �����������.
		system("CLS");

		//����� ���������� ������� �� �����
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}

		cout << endl;
	}
#endif // SHIFT_RIGHT

#ifdef BIN
	int decimal;
	cout << "������� ���������� �����: "; cin >> decimal;
	const int n = 32; // ����������� ��������� ����������� ����� ���� 'int'
	bool bin[n] = {}; // bin - Binary, ���� ������ ����� ������� ������� (����)  
	int res = 0;

	if (decimal == 0)cout << "0" << endl;
	else if (decimal == 1)cout << "1" << endl;
	
	while (decimal > 1)
	{
		res = decimal % 2;
		decimal /= 2;
		cout << res << endl;
	}
	cout << decimal;
	cout << endl;

#endif // BIN

	
	
	}
	

	



