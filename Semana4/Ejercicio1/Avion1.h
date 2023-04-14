#pragma once
#include"Base.h"
class Avion1 : public Base
{
public:
	Avion1();
	~Avion1();
	void dibujar();
private:

};

Avion1::Avion1():Base(12,3)
{

}

Avion1::~Avion1(){}

void Avion1::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "-----------";
	Console::SetCursorPosition(x, y+1);
	cout << "_\\__(_)__/ _";
	Console::SetCursorPosition(x, y+2);
	cout << "    ./ \\.";
}