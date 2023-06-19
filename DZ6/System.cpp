#include "System.h"
#include "Time_.h"
System::System()
{
	this->pAmount = 0;
	this->mas = NULL;
}

System::~System()
{
	if(mas != NULL)
	delete[]mas;
}

int System::valBusname(string name) const
{
	bool n = NULL;
	for (int i = 0; i < this->pAmount; i++) {
		if (name == mas[i].getBusname()) {
			n = i;
			break;
		}
	}
	return n;
}

void System::addBus(Bus bus)
{
	Bus* tmp = new Bus[++this->pAmount];
	for (int i = 0; i < this->pAmount - 1; i++) {
		tmp[i] = this->mas[i];
	}
	if (pAmount != 0) {
		delete[]mas;
	}
	tmp[this->pAmount - 1] = bus;
	this->mas = tmp;
}

void System::delBus(string name)
{
	int n = -1;
	for (int i = 0; i < this->pAmount; i++) {
		if (mas[i].getBusname() == name) {
			n = i;
			break;
		}
	}
	if (n != -1) {
		for (int i = n; i < this->pAmount - 1; i++) {
			mas[i] = mas[i++];
		}
		this->pAmount--;
	}
	else { cout << "Автобус с таким именем не найден" << endl; }
}

void System::coutTable()const
{
		string name;
		Time_ departure,end;
		int n = -1, timer, timew;
		Time_ buf = this->mas[n].getTimeend();
		cout << "Ведите имя нужного вам автобуса" << endl;
		cin >> name;
		for (int i = 0; i < this->pAmount; i++) {
			if (name == mas[i].getBusname()) {
				timer = mas[i].getTimeroutT();
				timew = mas[i].getTimewaiT();
				departure = mas[i].getTimestart();
				end = mas[i].getTimeend();
				n = i;
				break;
			}
		}
		if (n != -1) {
			while (true)
			{
				if (departure.getHour() <= end.getHour()) {
					departure += timew*60;
					cout << "Отбытия с начального пункта: " << departure << endl;
					departure += timer*60;
					cout << "Время прибытия в кочечный пункт: " << departure << endl;
					departure += timew*60;
					cout << "Отбытия с конечного пункта: " << departure << endl;
					departure += timer*60;
					cout << "Время прибытия в начальный пункт: " << departure << endl;
				}
				else break;
			}
		}
		else { cout << "Автобус  с указаным именем не найден" << endl; }
}

void System::showBuss()const {
	if (this->pAmount != 0) {
		for (int i = 0; i < this->pAmount; i++) {
			cout << "----------------------" << i+1 << "----------------------" << endl;
			cout << this->mas[i] << endl;
		}
	}
	else {
		cout << "В базе данных нет зарегестрированых автобусов" << endl;
	}
}
