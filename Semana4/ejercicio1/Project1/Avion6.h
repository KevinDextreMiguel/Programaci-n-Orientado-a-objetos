#pragma once
#include"Base.h"
class Avion6 : public Base
{
public:
	Avion6();
	~Avion6();
	void dibujar();
private:

};

Avion6::Avion6() :Base(17,4)
{

}

Avion6::~Avion6() {}

void Avion6::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "        .";
	Console::SetCursorPosition(x, y + 1);
	cout << "._______|_______.";
	Console::SetCursorPosition(x, y + 2);
	cout << "     \\(*)/";
	Console::SetCursorPosition(x, y + 3);
	cout << "     o/ \\o";
}
