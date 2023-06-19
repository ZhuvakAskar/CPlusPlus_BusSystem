#pragma once
#include "Bus.h"

class System
{
	int pAmount;
	Bus* mas;
public:

	System();
	~System();

	int valBusname(string name)const;

	void addBus(Bus bus);
	void delBus(string name);

	void coutTable()const;

	void showBuss()const;
};

