/*��� ����� � ����������� ������� ��������� ������: ��'�, �������, ������,
* � ����� ���������, �� ����� ��������� ����� � �����. ���� ����� ���������
* �� �������� ��� ���������� �����, ������ ��������� ����� ������.*/ 

#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
union hotel_tel
	{
	char hotel[20];
	char tel[10];
	};
struct confernce
	{
	char name[20], surname[20], address[20];
	int reservation; // 1-����� ��������� �����, 0-�
	hotel_tel reservation_info;
	};

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n = 1;
	confernce z;
	while (n == 1)
		{
		cout << "\n������ ������� ��'� �� ������\r\n";
		cin >> z.name >> z.surname >> z.address;
		cout << "\n����� �����? 1 - ���, 0 - �\r\n";
		cin >> z.reservation;
		if (z.reservation)
			{
			cout << "\n ������ ����� ������\r\n";
			cin >> z.reservation_info.hotel;
			}
		else
			{
			cout << "\n ������ ��� ����� ��������\r\n";
			cin >> z.reservation_info.tel;
			}
		cout << "\n �������� ������? 1 - ���, 0 - �\r\n";
		cin >> n;
		}
}
