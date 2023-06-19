#include "Bus.h"

Bus::Bus()
{
	this->busname = "";
	this->rout = "";
	Time_* start = NULL;
	Time_* end = NULL;
	this->routT = 0;
	this->waitT = 0;
}

Bus::Bus(string busname, string roat, Time_ start, Time_ end, int routT, int waiT)
{
	this->busname = busname;
	this->rout = roat;
	this->start = start;
	this->end = end;
	this->routT = routT;
	this->waitT = waitT;
}

Bus::~Bus()
{}

void Bus::setBusname(string busname)
{
	this->busname = busname;
}

string Bus::getBusname() const
{
	return this->busname;
}

void Bus::setRout(string rout)
{
	this->busname = busname;
}

string Bus::setRout() const
{
	return this->rout;
}

void Bus::setTimestart(Time_ start)
{
	this->start = start;
}

Time_ Bus::getTimestart() const
{
	return this->start;
}

void Bus::setTimeend(Time_ end)
{
	this->end = end;
}

Time_ Bus::getTimeend() const
{
	return this->end;
}

void Bus::setTimeroutT(int routT)
{
	this->routT = routT;
}

int Bus::getTimeroutT() const
{
	return this->routT;
}

void Bus::setTimewaiT(int waiT)
{
	this->waitT = waiT;
}

int Bus::getTimewaiT() const
{
	return this->waitT;
}

int Bus::timeminutes(Time_ t)const{
	return t.getHour() * 60 + t.getMinutes();
}

ostream& operator<<(ostream& out, const Bus& obj)
{
		out << "Название: " << obj.busname << endl;
		out << "Маршрут: "<< obj.rout << endl;
		out << "Рабочая смена c "<< obj.start << " до " << obj.end << endl;
		out << "Время пути в одну сторону: " << obj.routT << " (в минутах)" << endl;
		out << "Время остановки: "<< obj.waitT << " (в минутах)" << endl;
		cout << "----------------------------------------------" << endl;
		// TODO: вставьте здесь оператор return
		return out;
}

istream& operator>>(istream& in, Bus& obj)
{
	string tmp;
	cout << "Ведите имя автобуса" << endl;
	in >> obj.busname;
	cout << "Ведите маршрут автобуса (пример - \"Харьков-Киев\")" << endl;
	in >> obj.rout;
	cout <<  "Ведите время начала рабочей смены автобуса(пример - \"6 20\")" << endl;
	in >> obj.start;
	cout << "Ведите время конца рабочей смены автобуса (пример - \"23 15\")" << endl;
	in >> obj.end;
	cout <<  "Ведите время пути автобуса в минутах в одну сторону (пример - \"150\")" << endl;
	in >> obj.routT;
	cout << "Ведите время стояники между рейсами автобуса в минутах (пример - \"40\")" << endl;
	in >> obj.waitT;
	return in;
	// TODO: вставьте здесь оператор return
}
