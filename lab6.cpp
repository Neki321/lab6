/*Для участі у конференції потрібно заповнити заявку: ім'я, прізвище, адресу,
* а також зазначати, чи треба бронювати номер у готелі. Якщо житло непотрібне
* то записати свій контактний номер, інакше зазначити назву готелю.*/ 

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
	int reservation; // 1-треба бронювати номер, 0-ні
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
		cout << "\nВкажіть прізвище ім'я та адресу\r\n";
		cin >> z.name >> z.surname >> z.address;
		cout << "\nТреба житло? 1 - так, 0 - ні\r\n";
		cin >> z.reservation;
		if (z.reservation)
			{
			cout << "\n Вкажіть назву готелю\r\n";
			cin >> z.reservation_info.hotel;
			}
		else
			{
			cout << "\n Вкажіть ваш номер телефону\r\n";
			cin >> z.reservation_info.tel;
			}
		cout << "\n Наступна заявка? 1 - так, 0 - ні\r\n";
		cin >> n;
		}
}
