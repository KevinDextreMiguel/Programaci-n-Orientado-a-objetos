#pragma once
#include"Base.h"
class Avion9 : public Base
{
public:
	Avion9();
	~Avion9();
	void dibujar();
private:

};

Avion9::Avion9() :Base(18,4)
{

}

Avion9::~Avion9() {}

void Avion9::dibujar()
{
	Console::SetCursorPosition(x, y);
	cout << "____ _";
	Console::SetCursorPosition(x, y + 1);
	cout << "| __\\_\\_o____/_|";
	Console::SetCursorPosition(x, y + 2);
	cout << "<[___\\_\\_-----<";
	Console::SetCursorPosition(x, y + 3);
	cout << "|";
}
