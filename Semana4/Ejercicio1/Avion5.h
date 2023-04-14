#pragma once
#include"Base.h"
class Avion5 : public Base
{
public:
	Avion5();
	~Avion5();
	void dibujar();
private:

};

Avion5::Avion5() :Base(13, 3)
{

}

Avion5::~Avion5() {}

void Avion5::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "    __!__";
	Console::SetCursorPosition(x, y + 1);
	cout << "-----<*>-----";
	Console::SetCursorPosition(x, y + 2);
	cout << "    o O o";
}
