#pragma once
#include "Time_.h"
class Bus
{
private:
	string busname;
	string rout;
	int  routT, waitT;
	Time_ start;
	Time_ end;
public:

	Bus();
	Bus(string busname, string roat, Time_ start, Time_ end,int routT, int waiT);
	~Bus();

	void setBusname(string busname);
	string getBusname()const;
	void setRout(string rout);
	string setRout()const;

	void setTimestart(Time_ start);
	Time_ getTimestart()const;
	void setTimeend(Time_ end);
	Time_ getTimeend()const;

	void setTimeroutT(int routT);
	int getTimeroutT()const;
	void setTimewaiT(int waiT);
	int getTimewaiT()const;
	int timeminutes(Time_ t)const;

	friend ostream& operator << (ostream& out, const Bus& obj);
	friend istream& operator >> (istream& in, Bus& obj);
};

