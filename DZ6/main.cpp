#include "Bus.h"
#include "System.h"
#include "Time_.h"
void main() {
	setlocale(0, "");
	System busSystem;
	int menu = -1;
	Bus sample;
	string name;
	while (true)
	{
		cout << "============================================" << endl;
		cout << "0 - �����" << endl;
		cout << "1 - �������� �������" << endl;
		cout << "2 - ������� �������" << endl;
		cout << "3 - ����� ���������� ��������" << endl;
		cout << "4 - ����� ���� ��������� � ��" << endl;
		cout << "5 - ������� �������" << endl;
		cin >> menu;
		cout << "--------------------------------------------" << endl;
		switch (menu)
		{
		case 0: {
			break;
		}
		case 1:{
			cin.ignore();
			cin >>sample;
			busSystem.addBus(sample);
			break;
		}
		case 2: {
			cout << "������ �������� ��������" << endl;
			cin >> name;
			busSystem.delBus(name);
			break;
		}
		case 3: {
			busSystem.coutTable();
			break; 
		}
		case 4: {
			busSystem.showBuss();
			break;
		}
		case 5: {
			system("cls");
			break;
		}
		default:
			cout << "������ �����" << endl;
			break;
		}

		if (menu == 0) {
			cout << "============================================" << endl;
			break;
		}
	}

	system("pause");
}